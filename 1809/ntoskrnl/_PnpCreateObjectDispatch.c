/*
 * XREFs of _PnpCreateObjectDispatch @ 0x1408FAF58
 * Callers:
 *     _PnpCreateObject @ 0x1408FADE0 (_PnpCreateObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x14059B400 (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpCreateObjectDispatch(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, _BYTE *a6, __int16 a7)
{
  int ObjectDispatchCallback; // ebx
  int v12; // r10d
  char v13; // cl
  void (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD *); // rax
  __int64 (__fastcall *v16)(__int64, __int64, _QWORD, __int64, _QWORD *); // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v18[8]; // [rsp+50h] [rbp-48h] BYREF

  v16 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( a7 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, a3, &v16);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v16 )
      {
        LODWORD(v18[0]) = a4;
        HIDWORD(v18[2]) = v12;
        ObjectDispatchCallback = v16(a1, a2, (unsigned int)a3, 3LL, v18);
        if ( ObjectDispatchCallback >= 0 )
        {
          v13 = v18[2];
          *a5 = v18[1];
          *a6 = v13;
          if ( v13 )
          {
            if ( a3 >= 7 )
            {
              v14 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 496);
              if ( v14 )
              {
                v17[0] = *a5;
                v14(a1, a2, (unsigned int)a3, 2LL, v17);
              }
            }
          }
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
