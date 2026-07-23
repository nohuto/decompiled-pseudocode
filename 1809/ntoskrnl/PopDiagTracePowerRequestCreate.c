/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x14058A28C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1407024B4 (PopCreateKernelPowerRequest.c)
 * Callees:
 *     PoStoreRequester @ 0x140002BAC (PoStoreRequester.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  char *v8; // rsi
  _WORD *v9; // r9
  __int64 v10; // rcx
  _WORD *v11; // rdx
  __int16 v12; // bx
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rdx
  __int64 v15; // rcx
  _WORD *v16; // r8
  __int16 v17; // ax
  _WORD *v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  wchar_t *v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  bool v25; // zf
  int v26; // eax
  unsigned int v27; // r9d
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  ULONG v39; // r9d
  unsigned __int16 v40; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  UNICODE_STRING NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  int v50; // [rsp+64h] [rbp-9Ch] BYREF
  int v51; // [rsp+68h] [rbp-98h] BYREF
  int v52; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  int *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  int *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  int *v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  int *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int16 *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  __int16 *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+15Ch] [rbp+5Ch]
  wchar_t pszDest[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  v53 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      *(_QWORD *)&NumberOfBytes.Length = 0LL;
      v45 = *v5;
      v46 = 0;
      v47 = 0;
      v42 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v43 = 0;
      v52 = 0;
      v51 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, (unsigned __int64 *)&NumberOfBytes.Length, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(SIZE_T *)&NumberOfBytes.Length, 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(
                    *(_QWORD *)(v53 + 80),
                    (__int64)PoolWithTag,
                    (unsigned __int64 *)&NumberOfBytes.Length,
                    0) >= 0 )
        {
          v8 = 0LL;
          *(_QWORD *)&NumberOfBytes.Length = 0LL;
          if ( v45 )
          {
            v46 = v7[6];
            v47 = *(_DWORD *)(v53 + 16);
            if ( !(_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
              goto LABEL_36;
            v18 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
            v19 = 0x7FFFLL;
            do
            {
              if ( !*v18 )
                break;
              ++v18;
              --v19;
            }
            while ( v19 );
            v20 = v19 ? 0x7FFF - v19 : 0;
            if ( v19 )
            {
              Length = 2 * v20;
              v8 = (char *)v7 + *((_QWORD *)v7 + 2);
            }
            else
            {
LABEL_36:
              Length = NumberOfBytes.Length;
            }
            if ( v45 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v21 = pszDest;
            }
            else
            {
              v21 = 0LL;
            }
            RtlInitUnicodeString(&NumberOfBytes, v21);
            Buffer = NumberOfBytes.Buffer;
          }
          else
          {
            v9 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 3));
            if ( !(_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
              goto LABEL_17;
            v10 = 0x7FFFLL;
            v11 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
            do
            {
              if ( !*v11 )
                break;
              ++v11;
              --v10;
            }
            while ( v10 );
            v12 = v10 ? 0x7FFF - v10 : 0;
            if ( v10 )
            {
              Length = 2 * v12;
              v8 = (char *)v7 + *((_QWORD *)v7 + 2);
            }
            else
            {
LABEL_17:
              Length = NumberOfBytes.Length;
            }
            Buffer = 0LL;
            *(_QWORD *)&NumberOfBytes.Length = 0LL;
            if ( v9 )
            {
              v15 = 0x7FFFLL;
              v16 = v9;
              do
              {
                if ( !*v16 )
                  break;
                ++v16;
                --v15;
              }
              while ( v15 );
              v17 = v15 ? 0x7FFF - v15 : 0;
              if ( v15 )
              {
                Buffer = v9;
                NumberOfBytes.Length = 2 * v17;
              }
            }
          }
          v22 = v53;
          v23 = v42;
          if ( !*(_QWORD *)(v53 + 80) )
            v23 = 1;
          v42 = v23;
          v24 = *(_DWORD *)(v53 + 20);
          if ( (v24 & 2) != 0 )
          {
            v48 = 1;
            v24 = *(_DWORD *)(v53 + 20);
          }
          if ( (v24 & 1) != 0 )
          {
            v49 = 1;
            v24 = *(_DWORD *)(v53 + 20);
          }
          if ( (v24 & 4) != 0 )
          {
            v50 = 1;
            v24 = *(_DWORD *)(v53 + 20);
          }
          if ( (v24 & 8) != 0 )
          {
            v51 = 1;
            v24 = *(_DWORD *)(v53 + 20);
          }
          if ( (v24 & 0x10) != 0 )
          {
            v52 = 1;
            v24 = *(_DWORD *)(v53 + 20);
          }
          v25 = (v24 & 0x20) == 0;
          v26 = v43;
          v27 = 13;
          if ( !v25 )
            v26 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v43 = v26;
          UserData.Ptr = (ULONGLONG)&v53;
          v55 = &v45;
          v57 = &v46;
          v59 = &v47;
          v61 = &v42;
          v63 = &v48;
          v65 = &v49;
          v67 = &v50;
          v69 = v53 + 36;
          v71 = v53 + 32;
          v73 = v53 + 40;
          v28 = Length >> 1;
          v29 = NumberOfBytes.Length >> 1;
          v75 = (__int16 *)&v40;
          v77 = &v41;
          v40 = v28;
          v41 = NumberOfBytes.Length >> 1;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 2LL;
          v78 = 2LL;
          if ( v28 )
          {
            v27 = 14;
            v79 = v8;
            v80 = 2 * v28;
            v81 = 0;
          }
          if ( v29 )
          {
            v30 = 2LL * v27++;
            *(&UserData.Ptr + v30) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v30) = 2 * v29;
            *(&UserData.Reserved + 2 * v30) = 0;
          }
          v31 = 2LL * v27;
          v32 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v31) = (ULONGLONG)&v51;
          *((_QWORD *)&UserData.Size + v31) = 4LL;
          v33 = v27 + 1;
          v34 = v27 + 2;
          v33 *= 2LL;
          *(&UserData.Ptr + v33) = (ULONGLONG)&v52;
          *((_QWORD *)&UserData.Size + v33) = 4LL;
          v35 = 2LL * v34;
          *(&UserData.Ptr + v35) = (ULONGLONG)&v43;
          *((_QWORD *)&UserData.Size + v35) = 4LL;
          v36 = v34 + 1;
          v34 += 2;
          v36 *= 2LL;
          *(&UserData.Ptr + v36) = v22 + 44;
          *((_QWORD *)&UserData.Size + v36) = 4LL;
          v37 = 2LL * v34;
          *(&UserData.Ptr + v37) = v22 + 48;
          *((_QWORD *)&UserData.Size + v37) = 4LL;
          v38 = v34 + 1;
          v39 = v34 + 2;
          v38 *= 2LL;
          *(&UserData.Ptr + v38) = v22 + 52;
          *((_QWORD *)&UserData.Size + v38) = 4LL;
          if ( !a1 )
            v32 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v32, 0LL, v39, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
