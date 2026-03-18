/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x140673170
 * Callers:
 *     PopCreateUserPowerRequest @ 0x1406B3DA4 (PopCreateUserPowerRequest.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 *     PopCreateKernelPowerRequest @ 0x14073BEE4 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     PoStoreRequester @ 0x1400D8A48 (PoStoreRequester.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  _WORD *v8; // rsi
  __int64 v9; // r8
  _WORD *v10; // r8
  _WORD *v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // ax
  unsigned __int16 v14; // bx
  wchar_t *v15; // rdx
  wchar_t *Buffer; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // r9d
  unsigned __int16 v23; // bx
  unsigned __int16 v24; // r10
  __int64 v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  ULONG v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // r8
  _WORD *v36; // r9
  _WORD *v37; // r8
  __int64 v38; // rcx
  _WORD *v39; // rdx
  __int16 v40; // bx
  __int64 v41; // rcx
  _WORD *v42; // r8
  __int16 v43; // ax
  unsigned __int16 v44; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v45; // [rsp+34h] [rbp-CCh] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+3Ch] [rbp-C4h] BYREF
  int v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+44h] [rbp-BCh] BYREF
  int SessionId; // [rsp+48h] [rbp-B8h] BYREF
  int v51; // [rsp+4Ch] [rbp-B4h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+54h] [rbp-ACh] BYREF
  int v54; // [rsp+58h] [rbp-A8h] BYREF
  int v55; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  SIZE_T NumberOfBytes[3]; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  int *v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  int *v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  int *p_SessionId; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  int *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  int *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  int *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  __int64 v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  __int64 v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int16 *v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  __int16 *v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  _WORD *v84; // [rsp+160h] [rbp+60h]
  int v85; // [rsp+168h] [rbp+68h]
  int v86; // [rsp+16Ch] [rbp+6Ch]
  wchar_t pszDest[24]; // [rsp+1E0h] [rbp+E0h] BYREF

  v56 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      NumberOfBytes[0] = 0LL;
      v46 = *v5;
      v49 = 0;
      SessionId = 0;
      v47 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v48 = 0;
      v55 = 0;
      v54 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, NumberOfBytes, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v56 + 80), (__int64)PoolWithTag, NumberOfBytes, 0) >= 0 )
        {
          if ( v46 )
          {
            v49 = v7[6];
            v8 = 0LL;
            SessionId = MmGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v56 + 80) + 8LL));
            v9 = *((_QWORD *)v7 + 2);
            NumberOfBytes[0] = 0LL;
            v10 = (_WORD *)((char *)v7 + v9);
            if ( !v10 )
              goto LABEL_60;
            v11 = v10;
            v12 = 0x7FFFLL;
            do
            {
              if ( !*v11 )
                break;
              ++v11;
              --v12;
            }
            while ( v12 );
            v13 = v12 ? 0x7FFF - v12 : 0;
            if ( v12 )
            {
              v14 = 2 * v13;
              v8 = v10;
            }
            else
            {
LABEL_60:
              v14 = NumberOfBytes[0];
            }
            if ( v46 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v15 = pszDest;
            }
            else
            {
              v15 = 0LL;
            }
            RtlInitUnicodeString(&DestinationString, v15);
            Buffer = DestinationString.Buffer;
          }
          else
          {
            v8 = 0LL;
            v35 = *((_QWORD *)v7 + 2);
            v36 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 3));
            NumberOfBytes[0] = 0LL;
            v37 = (_WORD *)((char *)v7 + v35);
            if ( !v37 )
              goto LABEL_59;
            v38 = 0x7FFFLL;
            v39 = v37;
            do
            {
              if ( !*v39 )
                break;
              ++v39;
              --v38;
            }
            while ( v38 );
            v40 = v38 ? 0x7FFF - v38 : 0;
            if ( v38 )
            {
              v14 = 2 * v40;
              v8 = v37;
            }
            else
            {
LABEL_59:
              v14 = NumberOfBytes[0];
            }
            Buffer = 0LL;
            *(_QWORD *)&DestinationString.Length = 0LL;
            if ( v36 )
            {
              v41 = 0x7FFFLL;
              v42 = v36;
              do
              {
                if ( !*v42 )
                  break;
                ++v42;
                --v41;
              }
              while ( v41 );
              v43 = v41 ? 0x7FFF - v41 : 0;
              if ( v41 )
              {
                Buffer = v36;
                DestinationString.Length = 2 * v43;
              }
            }
          }
          v17 = v56;
          v18 = v47;
          if ( !*(_QWORD *)(v56 + 80) )
            v18 = 1;
          v47 = v18;
          v19 = *(_DWORD *)(v56 + 20);
          if ( (v19 & 2) != 0 )
          {
            v51 = 1;
            v19 = *(_DWORD *)(v56 + 20);
          }
          if ( (v19 & 1) != 0 )
          {
            v52 = 1;
            v19 = *(_DWORD *)(v56 + 20);
          }
          if ( (v19 & 4) != 0 )
          {
            v53 = 1;
            v19 = *(_DWORD *)(v56 + 20);
          }
          if ( (v19 & 8) != 0 )
          {
            v54 = 1;
            v19 = *(_DWORD *)(v56 + 20);
          }
          if ( (v19 & 0x10) != 0 )
          {
            v55 = 1;
            v19 = *(_DWORD *)(v56 + 20);
          }
          v20 = (v19 & 0x20) == 0;
          v21 = v48;
          v22 = 13;
          if ( !v20 )
            v21 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v48 = v21;
          UserData.Ptr = (ULONGLONG)&v56;
          v60 = &v46;
          v62 = &v49;
          p_SessionId = &SessionId;
          v66 = &v47;
          v68 = &v51;
          v70 = &v52;
          v72 = &v53;
          v74 = v56 + 36;
          v76 = v56 + 32;
          v78 = v56 + 40;
          v23 = v14 >> 1;
          v24 = DestinationString.Length >> 1;
          v80 = (__int16 *)&v44;
          v82 = &v45;
          v44 = v23;
          v45 = DestinationString.Length >> 1;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 2LL;
          v83 = 2LL;
          if ( v23 )
          {
            v22 = 14;
            v84 = v8;
            v85 = 2 * v23;
            v86 = 0;
          }
          if ( v24 )
          {
            v34 = 2LL * v22++;
            *(&UserData.Ptr + v34) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v34) = 2 * v24;
            *(&UserData.Reserved + 2 * v34) = 0;
          }
          v25 = 2LL * v22;
          v26 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v25) = (ULONGLONG)&v54;
          *((_QWORD *)&UserData.Size + v25) = 4LL;
          v27 = v22 + 1;
          v28 = v22 + 2;
          v27 *= 2LL;
          *(&UserData.Ptr + v27) = (ULONGLONG)&v55;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          v29 = 2LL * v28;
          *(&UserData.Ptr + v29) = (ULONGLONG)&v48;
          *((_QWORD *)&UserData.Size + v29) = 4LL;
          v30 = v28 + 1;
          v28 += 2;
          v30 *= 2LL;
          *(&UserData.Ptr + v30) = v17 + 44;
          *((_QWORD *)&UserData.Size + v30) = 4LL;
          v31 = 2LL * v28;
          *(&UserData.Ptr + v31) = v17 + 48;
          *((_QWORD *)&UserData.Size + v31) = 4LL;
          v32 = v28 + 1;
          v33 = v28 + 2;
          v32 *= 2LL;
          *(&UserData.Ptr + v32) = v17 + 52;
          *((_QWORD *)&UserData.Size + v32) = 4LL;
          if ( !a1 )
            v26 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v26, 0LL, v33, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
