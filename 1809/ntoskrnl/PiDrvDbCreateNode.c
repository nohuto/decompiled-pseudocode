/*
 * XREFs of PiDrvDbCreateNode @ 0x14073BD38
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14073BC40 (PiDrvDbRegisterNode.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ZwCreateEvent @ 0x1401B8BF0 (ZwCreateEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbDestroyNode @ 0x14083E864 (PiDrvDbDestroyNode.c)
 */

__int64 __fastcall PiDrvDbCreateNode(PCWSTR Source, int a2, __int64 a3, const WCHAR *a4, __int64 *a5)
{
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  _WORD *v10; // r15
  unsigned __int16 v11; // ax
  PVOID StringRoutine; // rax
  NTSTATUS appended; // ebx
  unsigned __int16 v14; // ax
  PVOID v15; // rax
  __int64 *v16; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x62647050u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x208uLL);
  v10 = (_WORD *)(v9 + 16);
  *(_DWORD *)(v9 + 64) = a2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v9 + 16), Source) )
    goto LABEL_21;
  v11 = *v10 + 38;
  *(_WORD *)(v9 + 32) = 0;
  *(_WORD *)(v9 + 34) = v11;
  StringRoutine = ExpAllocateStringRoutine(v11);
  *(_QWORD *)(v9 + 40) = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_21;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 32), L"\\REGISTRY\\MACHINE\\");
  if ( appended < 0 )
    goto LABEL_16;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 32), Source);
  if ( appended < 0 )
    goto LABEL_16;
  if ( !a4 )
  {
    v14 = *v10 + 58;
    *(_WORD *)(v9 + 48) = 0;
    *(_WORD *)(v9 + 50) = v14;
    v15 = ExpAllocateStringRoutine(v14);
    *(_QWORD *)(v9 + 56) = v15;
    if ( v15 )
    {
      appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 48), L"\\SystemRoot\\System32\\config\\");
      if ( appended < 0 )
        goto LABEL_16;
      appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 48), Source);
      if ( appended < 0 )
        goto LABEL_16;
      goto LABEL_10;
    }
LABEL_21:
    appended = -1073741670;
    goto LABEL_16;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v9 + 48), a4) )
    goto LABEL_21;
LABEL_10:
  if ( (*(_DWORD *)(v9 + 64) & 4) == 0 )
  {
LABEL_14:
    *(_DWORD *)(v9 + 496) = 259;
    v16 = (__int64 *)qword_140434238;
    if ( *(__int64 **)qword_140434238 != &PiDrvDbNodeList )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = qword_140434238;
    *(_QWORD *)v9 = &PiDrvDbNodeList;
    *v16 = v9;
    qword_140434238 = v9;
    *a5 = v9;
    v9 = 0LL;
    goto LABEL_16;
  }
  appended = ExInitializeResourceLite((PERESOURCE)(v9 + 88));
  if ( appended >= 0 )
  {
    *(_BYTE *)(v9 + 192) = 1;
    KeInitializeTimerEx((PKTIMER)(v9 + 264), NotificationTimer);
    KeInitializeDpc((PRKDPC)(v9 + 328), (PKDEFERRED_ROUTINE)PiDrvDbUnloadNodeDpcRoutine, (PVOID)v9);
    *(_QWORD *)(v9 + 424) = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwCreateEvent((PHANDLE)(v9 + 472), 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( appended >= 0 )
    {
      *(_BYTE *)(v9 + 489) = 1;
      *(_QWORD *)(v9 + 480) = 0xFFFFFFFFLL;
      goto LABEL_14;
    }
  }
LABEL_16:
  if ( v9 )
    PiDrvDbDestroyNode((PVOID)v9);
  return (unsigned int)appended;
}
