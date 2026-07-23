/*
 * XREFs of sub_180052D34 @ 0x180052D34
 * Callers:
 *     EtwEventWriteFull @ 0x1800527C0 (EtwEventWriteFull.c)
 *     sub_18005287C @ 0x18005287C (sub_18005287C.c)
 *     EtwEventWriteEx @ 0x180052C60 (EtwEventWriteEx.c)
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x180052CF0 (EtwEventWriteTransfer.c)
 * Callees:
 *     sub_180052FB8 @ 0x180052FB8 (sub_180052FB8.c)
 *     sub_18005300C @ 0x18005300C (sub_18005300C.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall sub_180052D34(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        GUID *a6,
        __int128 *a7,
        int a8,
        __int64 a9)
{
  char v9; // si
  int v10; // r11d
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r8
  ULONG v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  GUID ActivityId; // xmm0
  void *v19; // rcx
  NTSTATUS v20; // eax
  unsigned __int8 v22; // cl
  __int128 v23; // xmm0
  _BYTE Fields[4]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v27; // [rsp+6Ch] [rbp-94h]
  unsigned __int16 v28; // [rsp+6Eh] [rbp-92h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  GUID v30; // [rsp+A8h] [rbp-58h]
  char v31; // [rsp+B8h] [rbp-48h]
  __int16 v32; // [rsp+BAh] [rbp-46h]
  int v33; // [rsp+BCh] [rbp-44h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D8h] [rbp-28h]
  _BYTE v37[144]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v10 = a4;
  v11 = a3;
  v12 = (int)a2;
  v13 = a9;
  v14 = 0;
  if ( !a2 )
    return 87;
  v29 = *a2;
  if ( !HIWORD(a1) )
    return 6;
  v15 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
    return 6;
  v16 = *((_QWORD *)&v29 + 1);
  if ( *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF4) )
  {
    v22 = *(_BYTE *)((a1 & 0xFFFFFFFFFFFFLL) + 0xF5);
    if ( (BYTE4(v29) <= v22 || !v22)
      && ((*(_BYTE *)(v15 + 240) & 0x40) != 0 && !*((_QWORD *)&v29 + 1)
       || (*((_QWORD *)&v29 + 1) & *(_QWORD *)(v15 + 232)) != 0LL
       && (*((_QWORD *)&v29 + 1) & *(_QWORD *)(v15 + 224)) == *(_QWORD *)(v15 + 224)) )
    {
      v9 = 1;
      v14 = sub_18005300C(v15, v12, a5, HIDWORD(v11), 0, (__int64)a6, (__int64)a7, a8, a9, (__int64)v37);
      if ( v14 )
      {
LABEL_29:
        sub_180052FB8(v14, v37, v13, v11);
        return v14;
      }
      v16 = *((_QWORD *)&v29 + 1);
      v13 = a9;
      v11 = a3;
      v10 = a4;
    }
  }
  if ( *(_BYTE *)(v15 + 124) )
  {
    v17 = *(_BYTE *)(v15 + 125);
    if ( (BYTE4(v29) <= v17 || !v17)
      && ((*(_BYTE *)(v15 + 120) & 0x40) != 0 && !v16
       || (v16 & *(_QWORD *)(v15 + 112)) != 0 && (v16 & *(_QWORD *)(v15 + 104)) == *(_QWORD *)(v15 + 104)) )
    {
      v27 = 0;
      v28 = a5;
      v33 = a8;
      v34 = v13;
      if ( a6 )
        ActivityId = *a6;
      else
        ActivityId = NtCurrentTeb()->ActivityId;
      v31 = 0;
      v30 = ActivityId;
      if ( a7 )
      {
        v23 = *a7;
        v31 = 1;
        v35 = v23;
      }
      v19 = *(void **)(v15 + 88);
      v32 = v11;
      v36 = v10;
      v20 = ZwTraceEvent(v19, 0x300u, 0x78u, Fields);
      if ( v20 )
        v14 = RtlNtStatusToDosError(v20);
      else
        v14 = 0;
    }
  }
  if ( v9 )
    goto LABEL_29;
  return v14;
}
