/*
 * XREFs of EtwpSendDataBlock @ 0x140693638
 * Callers:
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1408F1864 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408F1B18 (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     KeQueryTimeIncrement @ 0x14007D4E0 (KeQueryTimeIncrement.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpQueueNotification @ 0x140693858 (EtwpQueueNotification.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2)
{
  __int64 *v4; // r10
  __int64 v5; // rbx
  __int16 v6; // ax
  int v7; // r14d
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // r11d
  __int64 v12; // r8
  char v13; // r12
  __int64 v14; // r9
  unsigned int v15; // edx
  __int64 v16; // r13
  __int64 v17; // rbx
  ULONG_PTR SessionById; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  void (__fastcall *v21)(__int64, __int64, __int128 *, __int64); // rax
  int *v22; // rax
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rax
  void (__fastcall *v26)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64); // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[48]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  __int64 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]

  memset(v34, 0, sizeof(v34));
  v31 = 0LL;
  v4 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  v6 = *(_WORD *)(a1 + 98);
  v7 = 0;
  if ( (v6 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    v28 = v9;
    if ( *(_QWORD *)(a1 + 88) )
    {
      v10 = MEMORY[0xFFFFF78000000320];
      if ( (*(_BYTE *)(a1 + 98) & 0x10) != 0 )
      {
        SessionById = MmGetSessionById(*(_DWORD *)(a1 + 56));
        v5 = SessionById;
        if ( !SessionById )
          return (unsigned int)-1073741275;
        v7 = MmAttachSession(SessionById);
        if ( v7 < 0 )
        {
          MmQuitNextSession(v5);
          return (unsigned int)v7;
        }
        v9 = v28;
        v4 = 0LL;
      }
      if ( *(_DWORD *)a2 == 3 )
      {
        if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
        {
          v19 = *(_QWORD *)(a1 + 32);
          v20 = v9;
          LOBYTE(v9) = *(_BYTE *)(a2 + 112);
          LOWORD(v27) = *(_WORD *)(v19 + 88);
          WORD1(v27) = *(unsigned __int8 *)(v19 + 90);
          DWORD1(v27) = *(_DWORD *)(v19 + 80);
          *((_QWORD *)&v27 + 1) = *(unsigned int *)(v19 + 84);
          v21 = *(void (__fastcall **)(__int64, __int64, __int128 *, __int64))(a1 + 88);
          v33 = v27;
          v21(v19 + 40, v9, &v33, v20);
        }
        else
        {
          v11 = *(_DWORD *)(a2 + 72);
          v12 = *(unsigned int *)(a2 + 116);
          v26 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64))(a1 + 88);
          v13 = v11 != 0 ? *(_BYTE *)(a2 + 76) : 0;
          v14 = *(_QWORD *)(a2 + 96) & -(__int64)(v11 != 0);
          v15 = 0;
          v16 = *(_QWORD *)(a2 + 88) & -(__int64)(v11 != 0);
          if ( (_DWORD)v12 )
          {
            v22 = (int *)(a2 + 132);
            while ( *v22 < 0 && *v22 != 0x80000000 )
            {
              ++v15;
              v22 += 4;
              if ( v15 >= (unsigned int)v12 )
                goto LABEL_10;
            }
            v23 = *(_DWORD *)(a2 + 16LL * v15 + 128);
            v31 = a2 + *(_QWORD *)(a2 + 16LL * v15 + 120);
            v4 = &v31;
            HIDWORD(v32) = *(_DWORD *)(a2 + 16LL * v15 + 132);
            LODWORD(v32) = v23;
          }
LABEL_10:
          LOBYTE(v12) = v13;
          v26(a2 + 56, v11, v12, v16, v14, v4, v28);
        }
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v5 )
      {
        MmDetachSession(v5, (__int64)v34);
        MmQuitNextSession(v5);
      }
      v17 = MEMORY[0xFFFFF78000000320];
      if ( (v17 - v10) * KeQueryTimeIncrement() >= 600010000
        && stru_140426650.LevelPlus1 > 5
        && TlgKeywordOn(&stru_140426650, 0x200000000800uLL) )
      {
        v37 = 8LL;
        v29 = 2164260864LL;
        v39 = 8LL;
        v41 = 16LL;
        v36 = &v29;
        v38 = &v30;
        v25 = *(_QWORD *)(a1 + 32) + 40LL;
        v30 = v24 / 10000;
        v40 = v25;
        TlgWrite(&stru_140426650, &unk_1403946DB, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( (v6 & 2) != 0 )
  {
    return (unsigned int)EtwpQueueNotification(*(PVOID *)(a1 + 80));
  }
  return (unsigned int)v7;
}
