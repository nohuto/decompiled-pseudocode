/*
 * XREFs of CoreMsgObjectCallout @ 0x1C01653FC
 * Callers:
 *     W32CalloutDispatch @ 0x1C005A060 (W32CalloutDispatch.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0056EE4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C01670E8 (-Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CoreMsgObjectCallout(
        unsigned int a1,
        struct _WIN32_OPENMETHOD_PARAMETERS *a2,
        __int64 a3,
        const GUID *a4)
{
  const GUID *v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  char v12[8]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  v12[0] = 0;
  if ( dword_1C019A350 > 5u )
  {
    v17 = 0;
    v15 = &v13;
    v13 = a1;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A238, 0LL, a4, 3u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v12, 5u);
  v7 = a1 - 33;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          v10 = -1073741585;
          goto LABEL_15;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 16LL))(*(_QWORD *)a2 + 8LL);
      }
      v10 = 0;
    }
    else
    {
      v10 = 0;
      if ( *((_BYTE *)a2 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a2) == -1 )
        v10 = -1073741790;
    }
  }
  else
  {
    v10 = CoreMessagingK::CoreMsgObject::Open(a2);
  }
LABEL_15:
  v13 = v10;
  if ( dword_1C019A350 > 5u )
  {
    v17 = 0;
    v15 = &v13;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A207, 0LL, v6, 3u, &pData);
  }
  if ( v12[0] )
    KeReleaseMutex(Mutex, 0);
  return v10;
}
