/*
 * XREFs of EvtIntReportEventWorker @ 0x18005291C
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x1800528B0 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x18010DFF0 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwpEventWriteFull @ 0x180052DD4 (EtwpEventWriteFull.c)
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 *     EtwWriteUMSecurityEvent @ 0x180075E10 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008DC10 (_local_unwind.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        char a6,
        unsigned __int8 *Sid,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        unsigned __int64 a11)
{
  unsigned __int8 *v13; // r12
  _EVENT_DATA_DESCRIPTOR *p_UserData; // rdi
  unsigned __int8 v15; // r15
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r8d
  unsigned int v24; // edx
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG v30; // r8d
  int v31; // edx
  __int64 v32; // rcx
  LONG v33; // eax
  __int64 v35; // [rsp+0h] [rbp-2D8h] BYREF
  int v36; // [rsp+50h] [rbp-288h]
  LONG Win32Error; // [rsp+54h] [rbp-284h]
  int v38; // [rsp+58h] [rbp-280h] BYREF
  int v39; // [rsp+5Ch] [rbp-27Ch] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-278h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-268h]
  int v42; // [rsp+74h] [rbp-264h]
  _EVENT_DATA_DESCRIPTOR *v43; // [rsp+78h] [rbp-260h]
  __int64 v44; // [rsp+80h] [rbp-258h] BYREF
  __int64 v45; // [rsp+88h] [rbp-250h]
  __int64 *v46; // [rsp+90h] [rbp-248h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-238h] BYREF

  v46 = &v35;
  v42 = a2;
  v45 = a1;
  v13 = Sid;
  Win32Error = 0;
  p_UserData = &UserData;
  v43 = &UserData;
  v15 = 0;
  v38 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    Win32Error = 87;
    goto LABEL_32;
  }
  v16 = a8 + (Sid != 0LL) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    p_UserData = (_EVENT_DATA_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v43 = p_UserData;
    if ( !p_UserData )
    {
      Win32Error = 8;
      goto LABEL_32;
    }
  }
  v17 = 0x8000000000000000uLL;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v15 = 2;
        break;
      case 2:
        v15 = 3;
        break;
      case 4:
        v15 = 4;
        break;
      case 8:
        v17 = 0x8020000000000000uLL;
        break;
      case 16:
        v17 = 0x8010000000000000uLL;
        break;
    }
  }
  else
  {
    v15 = 0;
  }
  *(_DWORD *)&EventDescriptor.Id = 0;
  EventDescriptor.Level = v15;
  EventDescriptor.Task = a5;
  EventDescriptor.Opcode = 0;
  EventDescriptor.Keyword = v17;
  if ( v13 )
  {
    if ( !RtlValidSid(v13) )
    {
      Win32Error = 87;
      local_unwind(v46, &loc_180052C6C);
      goto LABEL_29;
    }
    v38 = 4 * v13[1] + 8;
  }
  v44 = MEMORY[0x7FFE0014];
  p_UserData->Ptr = (unsigned __int64)&v44;
  *(_QWORD *)&p_UserData->Size = 8LL;
  p_UserData[1].Ptr = (unsigned __int64)&a6;
  *(_QWORD *)&p_UserData[1].Size = 4LL;
  v36 = 2;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_WORD *)(a3 + 2 * v18) );
  v39 = (unsigned __int16)(v18 + 1);
  p_UserData[2].Ptr = (unsigned __int64)&v39;
  *(_QWORD *)&p_UserData[2].Size = 2LL;
  v19 = 2 * v39;
  p_UserData[3].Ptr = a3;
  p_UserData[3].Size = v19;
  p_UserData[3].Reserved = 0;
  p_UserData[4].Ptr = (unsigned __int64)&v38;
  *(_QWORD *)&p_UserData[4].Size = 2LL;
  v20 = 5;
  v36 = 5;
  v21 = v38;
  if ( v38 )
  {
    p_UserData[5].Ptr = (unsigned __int64)v13;
    p_UserData[5].Size = v21;
    p_UserData[5].Reserved = 0;
    v20 = 6;
    v36 = 6;
  }
  v22 = v20;
  p_UserData[v22].Ptr = (unsigned __int64)&a8;
  *(_QWORD *)&p_UserData[v22].Size = 2LL;
  v23 = v20 + 1;
  v36 = v23;
  v24 = 0;
  v41 = 0;
  while ( v24 < a8 )
  {
    v25 = *(_QWORD *)(a10 + 8LL * v24);
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(v25 + 2 * v26) );
    v27 = 2 * v26 + 2;
    v28 = v23;
    p_UserData[v28].Ptr = v25;
    *(_QWORD *)&p_UserData[v28].Size = v27;
    v36 = ++v23;
    v41 = ++v24;
  }
  v29 = v23;
  p_UserData[v29].Ptr = (unsigned __int64)&a9;
  *(_QWORD *)&p_UserData[v29].Size = 4LL;
  v30 = v23 + 1;
  v36 = v30;
  v31 = a9;
  if ( a9 )
  {
    v32 = v30;
    p_UserData[v32].Ptr = a11;
    p_UserData[v32].Size = v31;
    p_UserData[v32].Reserved = 0;
    v36 = ++v30;
  }
  if ( !v42 )
  {
    v33 = EtwpEventWriteFull(v45, (unsigned int)&EventDescriptor, 0, 0, 4, 0LL, 0LL, v30, (__int64)p_UserData);
    goto LABEL_30;
  }
LABEL_29:
  v33 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, v30, p_UserData);
LABEL_30:
  Win32Error = v33;
  if ( p_UserData != &UserData )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, p_UserData);
LABEL_32:
  RtlSetLastWin32Error(Win32Error);
  return Win32Error == 0;
}
