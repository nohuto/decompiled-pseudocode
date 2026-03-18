/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x140858C90
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x14084BD40 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010A760 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     IopLiveDumpTrace @ 0x14029AC90 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14029AE94 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14029AFBC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14029B064 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpReleaseResources @ 0x140859AFC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140859E68 (IopLiveDumpWriteDumpFile.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 P)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = MEMORY[0xFFFFF78000000008];
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTrace();
  v3 = IopLiveDumpWriteDumpFile(P);
  IopLiveDumpTraceDumpFileWriteEnd(P, 1LL, v3);
  if ( v3 >= 0 && (*(_BYTE *)(P + 80) & 2) != 0 )
    v3 = 261;
  IopLiveDumpTraceInterfaceEnd(v4, 1LL, v3);
  if ( stru_140425C78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425C78, 0x200000000000uLL) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(P + 384) + 4000LL);
    v11 = 0;
    v14 = 0;
    v9 = &v6;
    v7 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    v10 = 8;
    v12 = &v7;
    v13 = 8;
    TlgWrite(&stru_140425C78, &unk_14038CB5F, (LPCGUID)(P + 640), (LPCGUID)(P + 624), 4u, &pData);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 624));
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag((PVOID)P, 0x706D644Cu);
  return (unsigned int)v3;
}
