/*
 * XREFs of EtwpPsProvTraceProcess @ 0x14066D210
 * Callers:
 *     EtwpWriteProcessEvent @ 0x14066D884 (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408C0B40 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     MmGetSessionId @ 0x1400897A0 (MmGetSessionId.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObGetProcessHandleCount @ 0x1405B4960 (ObGetProcessHandleCount.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x1405FF700 (PsQueryStatisticsProcess.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 */

int __fastcall EtwpPsProvTraceProcess(PEPROCESS Process, __int64 a2, unsigned int *a3, __int64 a4, __int16 a5)
{
  _UNKNOWN **v5; // rax
  const EVENT_DESCRIPTOR *v9; // r14
  ULONG v10; // edi
  char v11; // r10
  int v12; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v14; // rax
  unsigned int Length; // ecx
  unsigned int v16; // eax
  PACCESS_TOKEN v17; // rsi
  NTSTATUS v18; // eax
  PVOID v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ecx
  $34CFEF2B79F35BC3552E503326F2AF64 *p_SecureState; // rax
  unsigned __int64 *v25; // rbx
  __int64 v26; // rax
  int v28; // [rsp+38h] [rbp-D0h] BYREF
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  int Flink; // [rsp+40h] [rbp-C8h] BYREF
  int ProcessHandleCount; // [rsp+44h] [rbp-C4h] BYREF
  int v32; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  int v34; // [rsp+50h] [rbp-B8h] BYREF
  int v35; // [rsp+54h] [rbp-B4h] BYREF
  int Next; // [rsp+58h] [rbp-B0h] BYREF
  int SessionId; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43[3]; // [rsp+98h] [rbp-70h] BYREF
  char v44; // [rsp+B0h] [rbp-58h] BYREF
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  int v47; // [rsp+C8h] [rbp-40h]
  int v48; // [rsp+CCh] [rbp-3Ch]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  _LIST_ENTRY *p_ThreadListHead; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  unsigned __int64 *p_Next; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  char *p_SessionId; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  int *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  wchar_t *p_ProcessHandleCount; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  __int64 *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  __int64 *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  char *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  int *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  int *v70; // [rsp+198h] [rbp+90h]
  __int64 v71; // [rsp+1A0h] [rbp+98h]
  int *v72; // [rsp+1A8h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  int *v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  $34CFEF2B79F35BC3552E503326F2AF64 *v76; // [rsp+1C8h] [rbp+C0h]
  __int64 v77; // [rsp+1D0h] [rbp+C8h]
  unsigned __int64 *v78; // [rsp+1D8h] [rbp+D0h]
  int v79; // [rsp+1E0h] [rbp+D8h]
  int v80; // [rsp+1E4h] [rbp+DCh]
  wchar_t pszDest[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  _UNKNOWN *retaddr; // [rsp+240h] [rbp+138h] BYREF

  v5 = &retaddr;
  v28 = 0;
  switch ( a5 )
  {
    case 769:
      v9 = &ProcessStart;
      break;
    case 770:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessStop;
      break;
    case 771:
      v9 = (const EVENT_DESCRIPTOR *)&ProcessRundown;
      break;
    default:
      return (int)v5;
  }
  Flink = (int)Process[1].Header.WaitListHead.Flink;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&Flink;
  p_ThreadListHead = &Process[1].ThreadListHead;
  v10 = 2;
  v53 = 8LL;
  if ( ((a5 - 769) & 0xFFFD) != 0 )
  {
    if ( a5 == 770 )
    {
      TokenInformation = 0LL;
      PsQueryStatisticsProcess((__int64)Process, v43);
      v55 = 8LL;
      p_Next = &Process[2].Affinity.Bitmap[17];
      v57 = 4LL;
      p_SessionId = (char *)&Process[2].Affinity.Bitmap[3] + 4;
      v17 = PsReferencePrimaryToken(Process);
      v18 = SeQueryInformationToken(v17, TokenElevationType, &TokenInformation);
      v19 = TokenInformation;
      if ( v18 >= 0 )
      {
        if ( *(_DWORD *)TokenInformation == 1 )
        {
          P = 0LL;
          if ( SeQueryInformationToken(v17, TokenElevation, &P) >= 0 )
            v28 = *(_DWORD *)P != 0 ? 1 : 4;
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          v28 = *(_DWORD *)TokenInformation;
        }
      }
      ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v17);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      v59 = 4LL;
      v58 = &v28;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Process, 0LL);
      v61 = 4LL;
      p_ProcessHandleCount = (wchar_t *)&ProcessHandleCount;
      v38 = *(_QWORD *)&Process[1].IdealNode[4];
      v38 <<= 12;
      v62 = &v38;
      v39 = *(_QWORD *)&Process[1].IdealNode[8];
      v39 <<= 12;
      v64 = &v39;
      v66 = &v44;
      v20 = v45;
      if ( v46 )
        v20 = -1;
      v63 = 8LL;
      v32 = v20;
      v68 = &v32;
      v21 = v47;
      if ( v48 )
        v21 = -1;
      v65 = 8LL;
      v33 = v21;
      v22 = v49 >> 10;
      v70 = &v33;
      v49 = v22;
      v67 = 8LL;
      if ( HIDWORD(v22) )
        LODWORD(v22) = -1;
      v72 = &v34;
      v34 = v22;
      v50 >>= 10;
      v23 = v50;
      v69 = 4LL;
      v71 = 4LL;
      if ( HIDWORD(v50) )
        v23 = -1;
      v74 = &v35;
      p_SecureState = &Process[1].SecureState;
      v73 = 4LL;
      v25 = &Process[1].ActiveProcessors.Bitmap[12];
      v76 = p_SecureState;
      v78 = v25;
      v26 = -1LL;
      v35 = v23;
      v75 = 4LL;
      v77 = 4LL;
      do
        ++v26;
      while ( *((_BYTE *)v25 + v26) );
      v80 = 0;
      v79 = v26 + 1;
      v10 = 15;
    }
  }
  else
  {
    Next = (int)Process[1].SwapListEntry.Next;
    p_Next = (unsigned __int64 *)&Next;
    v55 = 4LL;
    SessionId = MmGetSessionId((__int64)Process);
    p_SessionId = (char *)&SessionId;
    v12 = 0;
    v57 = 4LL;
    v29 = 0;
    if ( (v11 & 1) != 0 )
    {
      v29 = 1;
      v12 = 1;
    }
    if ( (v11 & 8) != 0 )
      v29 = v12 | 2;
    p_DestinationString = (UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[15];
    v58 = &v29;
    v59 = 4LL;
    if ( !p_DestinationString || !p_DestinationString->Length )
    {
      RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", &Process[1].ActiveProcessors.Bitmap[12]);
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
    }
    v14 = (UNICODE_STRING *)&EmptyUnicodeString;
    if ( p_DestinationString )
      v14 = p_DestinationString;
    Length = v14->Length;
    p_ProcessHandleCount = v14->Buffer;
    v62 = (__int64 *)&EtwpNull;
    v66 = (char *)(a4 + 4);
    v68 = (int *)(a3 + 4);
    v69 = *a3;
    v70 = (int *)(a3 + 68);
    v16 = a3[2];
    v63 = 2LL;
    v10 = 11;
    v71 = v16;
    v61 = Length;
    v64 = (__int64 *)a4;
    v65 = 4LL;
    v67 = 4LL;
  }
  LODWORD(v5) = EtwWrite(EtwpPsProvRegHandle, v9, 0LL, v10, &UserData);
  return (int)v5;
}
