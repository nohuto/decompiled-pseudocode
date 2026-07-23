/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x180035D94
 * Callers:
 *     LdrpWriteBackProtectedDelayLoad @ 0x180035C68 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800361E8 (LdrpDoPostSnapWork.c)
 *     LdrResolveDelayLoadedAPI @ 0x180041E90 (LdrResolveDelayLoadedAPI.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18002B1F4 (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x180035F48 (RtlValidateUserCallTarget.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     bsearch_s @ 0x180092A40 (bsearch_s.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(char *a1, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  _DWORD *Config; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int *v10; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v14; // rbx
  unsigned int v15; // eax
  void *v16; // r12
  char v17[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-30h] BYREF
  char *v20; // [rsp+48h] [rbp-28h]
  _QWORD Key[2]; // [rsp+50h] [rbp-20h] BYREF

  v20 = a1;
  Context = 0LL;
  Key[0] = 0LL;
  Key[1] = 0LL;
  v5 = a1;
  v6 = 0;
  RtlImageNtHeaderEx(3u, a1, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(v5);
  if ( Config )
  {
    if ( *Config >= 0xB0u )
    {
      v8 = *((_QWORD *)Config + 21);
      if ( v8 )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v9 = Config[36];
          if ( (v9 & 0x4000) != 0 )
          {
            v10 = (unsigned int *)*((_QWORD *)Config + 20);
            v11 = (v9 >> 28) + 4;
            if ( !a2 )
              a2 = *v10;
            v12 = *(unsigned int *)((char *)v10 + v11 * ((_DWORD)v8 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v10 + v11 * ((_DWORD)v8 - 1));
            if ( a2 <= v12 && *v10 <= a3 && a3 >= a2 )
            {
              if ( *v10 >= a2 )
                goto LABEL_15;
              LODWORD(Key[0]) = a2;
              Context = v10;
              if ( bsearch_s(Key, v10, (unsigned int)v8, v11, LdrpTargetCompare, &Context) || a2 != a3 )
              {
                v10 = Context;
LABEL_15:
                LODWORD(v14) = 0;
                while ( (unsigned int)v14 < a3 && (unsigned int)v14 < v12 )
                {
                  v15 = v14;
                  v14 = *v10;
                  if ( v15 >= (unsigned int)v14 )
                    return (unsigned int)-1073741701;
                  v16 = *(void **)&v5[v14];
                  if ( (unsigned int)RtlValidateUserCallTarget(v16, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = RtlGuardGrantSuppressedCallAccess(v16, 4u, &OutHeaders);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                  }
                  v5 = v20;
                  v10 = (unsigned int *)((char *)v10 + v11);
                }
                return v6;
              }
            }
            return 0LL;
          }
        }
      }
    }
  }
  return v6;
}
