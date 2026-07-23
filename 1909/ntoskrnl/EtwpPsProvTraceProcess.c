/*
 * XREFs of EtwpPsProvTraceProcess @ 0x140683C20
 * Callers:
 *     EtwpWriteProcessEvent @ 0x140683A74 (EtwpWriteProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x14001D880 (MmGetSessionId.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     SeQueryTokenIntegrity @ 0x140139F78 (SeQueryTokenIntegrity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     PsQueryStatisticsProcess @ 0x140613A50 (PsQueryStatisticsProcess.c)
 *     ObGetProcessHandleCount @ 0x1406CC5B0 (ObGetProcessHandleCount.c)
 */

NTSTATUS __fastcall EtwpPsProvTraceProcess(PEPROCESS Process, char a2, unsigned int *a3, int *a4, __int16 a5)
{
  NTSTATUS result; // eax
  const EVENT_DESCRIPTOR *v10; // r14
  ULONG v11; // edi
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v13; // eax
  PACCESS_TOKEN v14; // rdi
  int v15; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v17; // rax
  unsigned int Length; // ecx
  unsigned int v19; // eax
  PACCESS_TOKEN v20; // rsi
  NTSTATUS v21; // eax
  PVOID v22; // rdi
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ecx
  unsigned __int8 *v27; // rax
  unsigned __int64 *v28; // rbx
  __int64 v29; // rax
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int Flink; // [rsp+44h] [rbp-C4h] BYREF
  int ProcessHandleCount; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+54h] [rbp-B4h] BYREF
  int v38; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+5Ch] [rbp-ACh] BYREF
  int SessionId; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  PVOID v44; // [rsp+78h] [rbp-90h] BYREF
  PVOID v45; // [rsp+80h] [rbp-88h] BYREF
  PEPROCESS Processa; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+90h] [rbp-78h] BYREF
  PVOID TokenInformation; // [rsp+98h] [rbp-70h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES IntegritySA; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v52[12]; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+20h] BYREF
  $06F80D32621C7EF2A9BF292A4D3B79FA *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  _LIST_ENTRY *p_ThreadListHead; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  struct _LIST_ENTRY **p_Blink; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  __int64 *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  int *p_SessionId; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *p_ProcessHandleCount; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  int *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  _QWORD *Sid; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  _DWORD *Buffer; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  int *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  int *v76; // [rsp+1E8h] [rbp+E0h]
  __int64 v77; // [rsp+1F0h] [rbp+E8h]
  int *v78; // [rsp+1F8h] [rbp+F0h]
  __int64 v79; // [rsp+200h] [rbp+F8h]
  unsigned int *v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  unsigned int *v82; // [rsp+218h] [rbp+110h]
  unsigned int v83; // [rsp+220h] [rbp+118h]
  int v84; // [rsp+224h] [rbp+11Ch]
  wchar_t pszDest[16]; // [rsp+228h] [rbp+120h] BYREF

  v30 = 0;
  memset(v52, 0, 0x58uLL);
  result = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  switch ( a5 )
  {
    case 769:
      v10 = &ProcessStart;
      goto LABEL_3;
    case 770:
      v10 = (const EVENT_DESCRIPTOR *)&ProcessStop;
      goto LABEL_3;
    case 771:
      v10 = (const EVENT_DESCRIPTOR *)&ProcessRundown;
LABEL_3:
      Flink = (int)Process[1].Header.WaitListHead.Flink;
      v11 = 3;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&Flink;
      v54 = &Process[2].440;
      p_ThreadListHead = &Process[1].ThreadListHead;
      v55 = 8LL;
      v57 = 8LL;
      if ( ((a5 - 769) & 0xFFFD) != 0 )
      {
        if ( a5 != 770 )
          return EtwWrite(EtwpPsProvRegHandle, v10, 0LL, v11, &UserData);
        v44 = 0LL;
        PsQueryStatisticsProcess((__int64)Process, v52);
        v59 = 8LL;
        p_Blink = &Process[2].ReadyListHead.Blink;
        v61 = 4LL;
        v60 = (__int64 *)((char *)&Process[2].Affinity.Bitmap[7] + 4);
        v20 = PsReferencePrimaryToken(Process);
        v21 = SeQueryInformationToken(v20, TokenElevationType, &v44);
        v22 = v44;
        if ( v21 >= 0 )
        {
          if ( *(_DWORD *)v44 == 1 )
          {
            v45 = 0LL;
            if ( SeQueryInformationToken(v20, TokenElevation, &v45) >= 0 )
              v30 = *(_DWORD *)v45 != 0 ? 1 : 4;
            if ( v45 )
              ExFreePoolWithTag(v45, 0);
          }
          else
          {
            v30 = *(_DWORD *)v44;
          }
        }
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v20);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        v63 = 4LL;
        p_SessionId = &v30;
        ProcessHandleCount = ObGetProcessHandleCount(Process, 0LL);
        v65 = 4LL;
        p_ProcessHandleCount = &ProcessHandleCount;
        v42 = *(_QWORD *)&Process[1].IdealProcessor[18];
        v42 <<= 12;
        v66 = (int *)&v42;
        v43 = *(_QWORD *)&Process[1].IdealNode[2];
        v43 <<= 12;
        v68 = (int *)&v43;
        Sid = &v52[3];
        v23 = v52[5];
        if ( HIDWORD(v52[5]) )
          v23 = -1;
        v67 = 8LL;
        v35 = v23;
        Buffer = &v35;
        v24 = v52[6];
        if ( HIDWORD(v52[6]) )
          v24 = -1;
        v69 = 8LL;
        v36 = v24;
        v25 = v52[8] >> 10;
        v74 = &v36;
        v52[8] = v25;
        v71 = 8LL;
        if ( HIDWORD(v25) )
          LODWORD(v25) = -1;
        v76 = &v37;
        v37 = v25;
        v52[9] >>= 10;
        v26 = v52[9];
        v73 = 4LL;
        v75 = 4LL;
        if ( HIDWORD(v52[9]) )
          v26 = -1;
        v78 = &v38;
        v27 = &Process[1].Spare2[63];
        v77 = 4LL;
        v28 = &Process[1].ActiveProcessors.Bitmap[11];
        v80 = (unsigned int *)v27;
        v82 = (unsigned int *)v28;
        v29 = -1LL;
        v38 = v26;
        v79 = 4LL;
        v81 = 4LL;
        do
          ++v29;
        while ( *((_BYTE *)v28 + v29) );
        v19 = v29 + 1;
      }
      else
      {
        Next = Process[1].SwapListEntry.Next;
        v47 = -1LL;
        v31 = -1;
        IntegritySA.Sid = 0LL;
        v39 = (int)Process[1].SwapListEntry.Next;
        v32 = -1;
        p_Blink = (struct _LIST_ENTRY **)&v39;
        Processa = 0LL;
        TokenInformation = 0LL;
        P = 0LL;
        v59 = 4LL;
        if ( PsLookupProcessByProcessId(Next, &Processa) >= 0 )
        {
          v47 = *(_QWORD *)&Processa[2].0;
          ObfDereferenceObject(Processa);
        }
        v61 = 8LL;
        v60 = &v47;
        SessionId = MmGetSessionId((__int64)Process);
        p_SessionId = &SessionId;
        v13 = 0;
        v63 = 4LL;
        if ( (a2 & 1) != 0 )
          v13 = 1;
        else
          v11 = 2;
        v65 = 4LL;
        if ( (a2 & 8) != 0 )
          v13 = v11;
        v41 = v13;
        p_ProcessHandleCount = &v41;
        v14 = PsReferencePrimaryToken(Process);
        if ( SeQueryInformationToken(v14, TokenElevationType, &TokenInformation) >= 0 )
          v31 = *(_DWORD *)TokenInformation;
        v67 = 4LL;
        v66 = &v31;
        if ( TokenInformation )
          ExFreePoolWithTag(TokenInformation, 0);
        if ( SeQueryInformationToken(v14, TokenElevation, &P) >= 0 )
          v32 = *(_DWORD *)P;
        v69 = 4LL;
        v68 = &v32;
        if ( P )
          ExFreePoolWithTag(P, 0);
        SeQueryTokenIntegrity(v14, &IntegritySA);
        v15 = *((unsigned __int8 *)IntegritySA.Sid + 1);
        Sid = IntegritySA.Sid;
        v71 = (unsigned int)(4 * v15 + 8);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v14);
        p_DestinationString = (UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[14];
        if ( !p_DestinationString || !p_DestinationString->Length )
        {
          RtlStringCchPrintfW(pszDest, 0xFuLL, L"%S", &Process[1].ActiveProcessors.Bitmap[11]);
          RtlInitUnicodeString(&DestinationString, pszDest);
          p_DestinationString = &DestinationString;
        }
        v17 = (UNICODE_STRING *)&EmptyUnicodeString;
        if ( p_DestinationString )
          v17 = p_DestinationString;
        Length = v17->Length;
        Buffer = v17->Buffer;
        v74 = (int *)&EtwpNull;
        v78 = a4 + 1;
        v80 = a3 + 4;
        v81 = *a3;
        v82 = a3 + 68;
        v19 = a3[2];
        v73 = Length;
        v75 = 2LL;
        v76 = a4;
        v77 = 4LL;
        v79 = 4LL;
      }
      v11 = 16;
      v84 = 0;
      v83 = v19;
      return EtwWrite(EtwpPsProvRegHandle, v10, 0LL, v11, &UserData);
  }
  return result;
}
