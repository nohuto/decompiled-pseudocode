/*
 * XREFs of _PnpInterfaceRaisePropertyChangeEventWorker @ 0x1406E6400
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1406E6D84 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpInterfaceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r11
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]

  v13[1] = a4;
  v13[0] = a3;
  v14 = a5;
  a6(a1, a2, 3LL);
  v8 = &unk_140350480;
  v9 = 2LL;
  do
  {
    result = 0LL;
    if ( *(_DWORD *)v8 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*(v8 - 1) + 8 * result);
        if ( *(_DWORD *)(a5 + 16) == *(_DWORD *)(v11 + 16) )
        {
          v12 = *(_QWORD *)a5 - *(_QWORD *)v11;
          if ( *(_QWORD *)a5 == *(_QWORD *)v11 )
            v12 = *(_QWORD *)(a5 + 8) - *(_QWORD *)(v11 + 8);
          if ( !v12 )
            break;
        }
        result = (unsigned int)(result + 1);
        if ( (unsigned int)result >= *(_DWORD *)v8 )
          goto LABEL_5;
      }
      v14 = v8[1];
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))a6)(a1, a2, 3LL, 4LL, v13);
    }
LABEL_5:
    v8 += 3;
    --v9;
  }
  while ( v9 );
  return result;
}
