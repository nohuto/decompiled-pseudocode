/*
 * XREFs of HmgPrefetchAllObjt @ 0x1C005B3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall HmgPrefetchAllObjt(char a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // edi
  GdiHandleManager *v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  _QWORD v22[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v23[32]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, sizeof(v22));
  result = (__int64)v23;
  v22[3] = v23;
  v6 = 0;
  v22[0] = 1LL;
  v22[1] = -3LL;
LABEL_2:
  v7 = gpHandleManager;
  while ( ++v6 < *(_DWORD *)gpHandleManager )
  {
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    result = v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16);
    if ( v6 < (unsigned int)result )
    {
      if ( v6 >= v9 )
        v10 = ((v6 - v9) >> 16) + 1;
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(v8 + 8 * v10 + 8);
      if ( (_DWORD)v10 )
        v12 = v6 + ((1 - (_DWORD)v10) << 16) - v9;
      else
        v12 = v6;
      v13 = 0LL;
      if ( v12 >= *(_DWORD *)(v11 + 20) )
      {
        v14 = 0LL;
      }
      else
      {
        result = *(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v12 >> 8));
        v14 = *(_QWORD *)(result + 16LL * (unsigned __int8)v12 + 8);
      }
      if ( v14 )
      {
        result = *(_QWORD *)v11;
        v13 = *(_QWORD *)v11 + 24LL * v12;
      }
      if ( v13 )
      {
        if ( !v6 )
          break;
        if ( *(_BYTE *)(v13 + 14) == a1 )
        {
          result = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v6);
          v16 = *((_QWORD *)v7 + 2);
          v17 = (unsigned int)result;
          v18 = *(_DWORD *)(v16 + 2056);
          if ( (unsigned int)result < v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
          {
            if ( (unsigned int)result >= v18 )
              v19 = (((unsigned int)result - v18) >> 16) + 1;
            else
              v19 = 0LL;
            v20 = *(_QWORD *)(v16 + 8 * v19 + 8);
            if ( (_DWORD)v19 )
            {
              result = ((1 - (_DWORD)v19) << 16) - v18;
              v17 = (unsigned int)(result + v17);
            }
            if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
            {
              v21 = 0LL;
            }
            else
            {
              result = *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8));
              v21 = *(_QWORD *)(result + 16LL * (unsigned __int8)v17 + 8);
            }
            if ( v21 )
            {
              result = 2LL * v4++;
              v23[result] = v21;
              v23[result + 1] = a2;
            }
          }
        }
        v15 = v4;
        if ( v4 == 16 )
        {
          v22[2] = 16LL;
          result = MmPrefetchVirtualAddresses(v22);
        }
        v4 = 0;
        if ( v15 != 16 )
          v4 = v15;
        goto LABEL_2;
      }
    }
  }
  if ( v4 )
  {
    v22[2] = v4;
    return MmPrefetchVirtualAddresses(v22);
  }
  return result;
}
