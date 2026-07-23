/*
 * XREFs of IopDumpCallAddPagesCallbacks @ 0x1402813CC
 * Callers:
 *     IoWriteCrashDump @ 0x14028079C (IoWriteCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402806AC (IoUpdateBugCheckProgressEnvVariable.c)
 *     IopAddPageDumpRange @ 0x140280E80 (IopAddPageDumpRange.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140292470 (KeValidateBugCheckCallbackRecord.c)
 */

unsigned __int8 __fastcall IopDumpCallAddPagesCallbacks(int a1)
{
  unsigned __int8 result; // al
  __int64 v3; // rdi
  int v4; // esi
  _QWORD v5[11]; // [rsp+40h] [rbp-58h] BYREF
  char v6; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v8; // [rsp+B8h] [rbp+20h]

  result = (unsigned __int8)memset(v5, 0, 0x20uLL);
  v3 = KeBugCheckAddRemovePagesCallbackListHead;
  v7 = &KeBugCheckAddRemovePagesCallbackListHead;
  while ( 1 )
  {
    v8 = v3;
    if ( (__int64 *)v3 == &KeBugCheckAddRemovePagesCallbackListHead )
      break;
    result = KeValidateBugCheckCallbackRecord(v3, 4LL, &v7);
    if ( result )
    {
      v5[0] = 0LL;
      HIDWORD(v5[1]) = a1;
      v4 = 0;
      do
      {
        v5[2] = 0LL;
        LODWORD(v5[1]) = 0;
        v5[3] = 0LL;
        v6 = 0;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *))(v3 + 16))(4LL, v3, v5);
        if ( v4 >= 0 )
        {
          if ( v5[3] )
            v4 = IopAddPageDumpRange((__int64)v5, &v6);
        }
      }
      while ( v6 );
      result = (v4 < 0) + 3;
      *(_BYTE *)(v3 + 44) = result;
    }
    else if ( !v7 )
    {
      return result;
    }
    v3 = *(_QWORD *)v3;
  }
  return result;
}
