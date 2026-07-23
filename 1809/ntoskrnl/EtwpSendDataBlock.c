/*
 * XREFs of EtwpSendDataBlock @ 0x1405C139C
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C5D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B6364 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B6618 (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C18E0 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 *v4; // r13
  _KPROCESS *v5; // rdi
  unsigned int v6; // esi
  __int64 v10; // rdx
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  char v13; // bl
  __int64 v14; // r15
  unsigned int v15; // edx
  __int64 v16; // r12
  _KPROCESS *SessionById; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  int *v20; // rcx
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp-39h]
  _QWORD v23[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-21h] BYREF
  int v25; // [rsp+60h] [rbp-19h]
  int v26; // [rsp+64h] [rbp-15h]
  _BYTE v27[48]; // [rsp+68h] [rbp-11h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
      return (unsigned int)EtwpQueueNotification(*(_QWORD *)(a1 + 80), a2, a1);
    return v6;
  }
  v10 = *(_QWORD *)(a1 + 80);
  v22 = v10;
  if ( !*(_QWORD *)(a1 + 88) )
    return v6;
  if ( (v3 & 0x10) != 0 )
  {
    SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 56));
    v5 = SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741275;
    v6 = MmAttachSession(SessionById, (__int64)v27);
    if ( (v6 & 0x80000000) != 0 )
      goto LABEL_13;
    v10 = v22;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
    {
      v18 = *(_QWORD *)(a1 + 32);
      v19 = v10;
      LOBYTE(v10) = *(_BYTE *)(a2 + 112);
      LOWORD(v23[0]) = *(_WORD *)(v18 + 88);
      WORD1(v23[0]) = *(unsigned __int8 *)(v18 + 90);
      HIDWORD(v23[0]) = *(_DWORD *)(v18 + 80);
      v23[1] = *(unsigned int *)(v18 + 84);
      (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(a1 + 88))(v18 + 40, v10, v23, v19);
    }
    else
    {
      v11 = *(_DWORD *)(a2 + 72);
      v12 = *(_DWORD *)(a2 + 116);
      v23[0] = *(_QWORD *)(a1 + 88);
      v13 = v11 != 0 ? *(_BYTE *)(a2 + 76) : 0;
      v14 = *(_QWORD *)(a2 + 96) & -(__int64)(v11 != 0);
      v15 = 0;
      v16 = *(_QWORD *)(a2 + 88) & -(__int64)(v11 != 0);
      if ( v12 )
      {
        v20 = (int *)(a2 + 132);
        while ( 1 )
        {
          a3 = (unsigned int)*v20;
          if ( *v20 >= 0 || (_DWORD)a3 == 0x80000000 )
            break;
          ++v15;
          v20 += 4;
          if ( v15 >= v12 )
            goto LABEL_10;
        }
        v4 = &v24;
        v21 = *(_DWORD *)(a2 + 16LL * v15 + 128);
        v24 = a2 + *(_QWORD *)(a2 + 16LL * v15 + 120);
        v26 = *(_DWORD *)(a2 + 16LL * v15 + 132);
        v25 = v21;
      }
LABEL_10:
      LOBYTE(a3) = v13;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64))v23[0])(
        a2 + 56,
        v11,
        a3,
        v16,
        v14,
        v4,
        v22);
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    MmDetachSession((__int64)v5, (__int64)v27);
LABEL_13:
    ObfDereferenceObject(v5);
  }
  return v6;
}
