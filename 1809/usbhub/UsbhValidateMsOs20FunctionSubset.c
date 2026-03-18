/*
 * XREFs of UsbhValidateMsOs20FunctionSubset @ 0x1C0057FC0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C0043CE4 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20FunctionSubset(__int64 a1, _DWORD *a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  __int64 v8; // r9
  int v9; // r8d
  unsigned __int64 v10; // rbp
  unsigned __int16 *v11; // rdi
  char v12; // si
  unsigned __int16 v13; // ax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // r10
  _BYTE v18[64]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 *v19; // [rsp+A0h] [rbp+18h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( *a3 != 8 )
  {
    v8 = *a3;
    v9 = 1447449392;
LABEL_18:
    Log(a1, 256, v9, v8, 0LL);
    return 0;
  }
  v8 = a3[3];
  if ( (unsigned int)v8 < 0xC )
  {
    v9 = 1447449393;
    goto LABEL_18;
  }
  v10 = (unsigned __int64)a3 + v8;
  if ( (unsigned __int64)a3 + v8 > a4 )
  {
    v9 = 1447449394;
    goto LABEL_18;
  }
  v11 = a3 + 4;
  v19 = v11;
  v12 = 1;
  do
  {
    v13 = v11[1];
    if ( v13 < 9u )
    {
      v14 = v13;
      v15 = 2LL * v13;
      v16 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + v15);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 8 * v15 + 9) )
      {
        Log(a1, 256, 1447449395, v14, 0LL);
        v12 = 0;
      }
      v12 = v16(a1, v18, v11, v10) != 0 ? v12 : 0;
    }
    if ( !UsbhGetNextMsOs20Descriptor(v10, &v19) )
    {
      v8 = 0LL;
      v9 = 1447449396;
      goto LABEL_18;
    }
    v11 = v19;
  }
  while ( v19 );
  if ( v12 == 1 )
    *a2 |= 0x10u;
  return v12;
}
