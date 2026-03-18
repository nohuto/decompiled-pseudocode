/*
 * XREFs of ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077FD4
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0076BD8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0076F08 (-CitpStart@@YAJXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01839F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00336E8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00360A8 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C00787A4 (-Citp100NSToMS@@YAI_K@Z.c)
 *     ?CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z @ 0x1C00787D4 (-CitpPostUpdateUseInfoOpenKey@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAPEAX@Z.c)
 *     ?CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z @ 0x1C007894C (-CitpPostUpdateUseInfoGetBuildNumber@@YAJPEAI@Z.c)
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C00789D8 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall CitpPostUpdateUseInfoLoad(struct _CIT_IMPACT_CONTEXT *a1)
{
  int v1; // r14d
  _OWORD *v2; // rsi
  __int64 result; // rax
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // r15
  __int64 v7; // r12
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  ULONG v14; // eax
  unsigned __int8 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int128 v32; // xmm0
  int v33; // r14d
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  int v46; // r8d
  int v47; // r8d
  unsigned int v48; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-85h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-81h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-71h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-51h]
  unsigned __int16 v55[58]; // [rsp+74h] [rbp-4Dh] BYREF

  v1 = 0;
  v2 = (_OWORD *)((char *)a1 + 288);
  KeyHandle = 0LL;
  v48 = 0;
  v49 = 0;
  memset((char *)a1 + 288, 0, 0x70uLL);
  *((_DWORD *)a1 + 129) = 0;
  result = CitpPostUpdateUseInfoGetUpdateKey(&v48);
  if ( (int)result < 0 )
    return result;
  result = CitpPostUpdateUseInfoGetBuildNumber(&v49);
  if ( (int)result < 0 )
    return result;
  result = CitpPostUpdateUseInfoOpenKey(a1, &KeyHandle);
  if ( (int)result < 0 )
    return result;
  memset(v55, 0, 0x70uLL);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PUUActive");
  ResultLength = 124;
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x7Cu,
         &ResultLength) >= 0 )
  {
    if ( v54 == 112 )
    {
      if ( v55[12] == 210 && *(_DWORD *)v55 == v48 )
      {
        v8 = *(_OWORD *)&v55[8];
        *((_OWORD *)a1 + 25) = *(_OWORD *)v55;
        v9 = *(_OWORD *)&v55[16];
        *((_OWORD *)a1 + 26) = v8;
        v10 = *(_OWORD *)&v55[24];
        *((_OWORD *)a1 + 27) = v9;
        v11 = *(_OWORD *)&v55[32];
        *((_OWORD *)a1 + 28) = v10;
        v12 = *(_OWORD *)&v55[40];
        *((_OWORD *)a1 + 29) = v11;
        v13 = *(_OWORD *)&v55[48];
        *((_OWORD *)a1 + 30) = v12;
        *((_OWORD *)a1 + 31) = v13;
        goto LABEL_9;
      }
      v5 = v55[2];
      if ( *(_DWORD *)&v55[48] == v49 )
        v1 = *(_DWORD *)&v55[46];
      v7 = *(_QWORD *)&v55[40];
      v6 = v55[44];
    }
    else
    {
      if ( v54 >= 0x18 )
        v5 = v55[2];
      if ( v54 >= 0x1A )
      {
        if ( v55[12] >= 0xD1u )
        {
          v7 = *(_QWORD *)&v55[40];
          v6 = v55[44];
        }
        if ( v55[12] >= 0xD2u )
          v1 = *(_DWORD *)&v55[46];
      }
    }
  }
  memset(v55, 0, 0x70uLL);
  *(_DWORD *)&v55[48] = v49;
  v55[12] = 210;
  v55[2] = v5;
  *(_QWORD *)&v55[40] = v7;
  *(_DWORD *)&v55[46] = v1;
  if ( v7 || v6 )
  {
    v55[44] = v6;
  }
  else
  {
    if ( !v5 )
      v5 = 1;
    v55[44] = v5;
  }
  *(_DWORD *)v55 = v48;
  *(_QWORD *)&v55[36] = MEMORY[0xFFFFF78000000014];
  v40 = *(_OWORD *)&v55[8];
  *((_OWORD *)a1 + 25) = *(_OWORD *)v55;
  v41 = *(_OWORD *)&v55[16];
  *((_OWORD *)a1 + 26) = v40;
  v42 = *(_OWORD *)&v55[24];
  *((_OWORD *)a1 + 27) = v41;
  v43 = *(_OWORD *)&v55[32];
  *((_OWORD *)a1 + 28) = v42;
  v44 = *(_OWORD *)&v55[40];
  *((_OWORD *)a1 + 29) = v43;
  v45 = *(_OWORD *)&v55[48];
  *((_OWORD *)a1 + 30) = v44;
  *((_OWORD *)a1 + 31) = v45;
  CitpStatIncrement(&v55[2], 1);
LABEL_9:
  CitpStatIncrement(&v55[4], 1);
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v14 = RtlLengthSid(*((PSID *)a1 + 12));
    v15 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
    v16 = 314159LL;
    v17 = v14;
    if ( v14 >= 8uLL )
    {
      v18 = (unsigned __int64)v14 >> 3;
      v17 = v14 - 8 * v18;
      do
      {
        v19 = v15[7];
        v20 = 37
            * (v15[6]
             + 37 * (v15[5] + 37 * (v15[4] + 37 * (v15[3] + 37 * (v15[2] + 37 * (v15[1] + 37 * (*v15 + 37 * v16)))))));
        v15 += 8;
        v16 = v19 + v20;
        --v18;
      }
      while ( v18 );
    }
    if ( v17 < 1 || v17 > 7 )
      goto LABEL_23;
    v21 = v17 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v46 = v24 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                if ( v47 != 1 )
                  goto LABEL_23;
                LODWORD(v16) = *v15++ + 37 * v16;
              }
              LODWORD(v16) = *v15++ + 37 * v16;
            }
            LODWORD(v16) = *v15++ + 37 * v16;
          }
          LODWORD(v16) = *v15++ + 37 * v16;
        }
        LODWORD(v16) = *v15++ + 37 * v16;
      }
      LODWORD(v16) = *v15++ + 37 * v16;
    }
    LODWORD(v16) = *v15 + 37 * v16;
LABEL_23:
    *(_DWORD *)&v55[16] = v16;
  }
  v25 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 188), v25);
  v26 = *((unsigned int *)a1 + 51);
  v27 = (unsigned int)dword_1C01D0CCC;
  v28 = 1000LL * *(unsigned int *)&v55[6];
  *((_DWORD *)a1 + 128) = v25;
  v29 = (v26 + v28) % v27;
  v30 = *(_DWORD *)&v55[52];
  *((_DWORD *)a1 + 129) = v26 - v29;
  if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)&v55[36] )
  {
    v31 = Citp100NSToMS(MEMORY[0xFFFFF78000000014] - *(_QWORD *)&v55[36]);
    v30 = *(_DWORD *)&v55[52] + v31;
  }
  v32 = *(_OWORD *)v55;
  v33 = v25 - v30;
  result = 0LL;
  v34 = *(_OWORD *)&v55[8];
  *((_DWORD *)a1 + 191) = v33;
  *v2 = v32;
  v35 = *(_OWORD *)&v55[16];
  v2[1] = v34;
  v36 = *(_OWORD *)&v55[24];
  v2[2] = v35;
  v37 = *(_OWORD *)&v55[32];
  v2[3] = v36;
  v38 = *(_OWORD *)&v55[40];
  v2[4] = v37;
  v39 = *(_OWORD *)&v55[48];
  v2[5] = v38;
  v2[6] = v39;
  return result;
}
