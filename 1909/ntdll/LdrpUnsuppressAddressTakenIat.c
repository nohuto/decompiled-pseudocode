/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x180055648
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005551C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800558D0 (LdrpDoPostSnapWork.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800552BC (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x1800557FC (RtlValidateUserCallTarget.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008F9C0 (bsearch_s.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(char *a1, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  _DWORD *Config; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  rsize_t v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r12
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
      if ( *((_QWORD *)Config + 21) )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v8 = Config[36];
          if ( (v8 & 0x4000) != 0 )
          {
            v9 = (unsigned int *)*((_QWORD *)Config + 20);
            v10 = (unsigned int)Config[42];
            v11 = (v8 >> 28) + 4;
            if ( !a2 )
              a2 = *v9;
            v12 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( a2 <= v12 && *v9 <= a3 && a3 >= a2 )
            {
              if ( *v9 >= a2 )
                goto LABEL_15;
              LODWORD(Key[0]) = a2;
              Context = v9;
              if ( bsearch_s(Key, v9, v10, v11, LdrpTargetCompare, &Context) || a2 != a3 )
              {
                v9 = Context;
LABEL_15:
                LODWORD(v14) = 0;
                while ( (unsigned int)v14 < a3 && (unsigned int)v14 < v12 )
                {
                  v15 = v14;
                  v14 = *v9;
                  if ( v15 >= (unsigned int)v14 )
                    return (unsigned int)-1073741701;
                  v16 = *(_QWORD *)&v5[v14];
                  if ( (unsigned int)RtlValidateUserCallTarget(v16, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = RtlGuardGrantSuppressedCallAccess(v16, 4u, &OutHeaders);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                  }
                  v5 = v20;
                  v9 = (unsigned int *)((char *)v9 + v11);
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
