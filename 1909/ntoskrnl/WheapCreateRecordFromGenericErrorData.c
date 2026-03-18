/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x140340B84
 * Callers:
 *     WheapDefaultErrSrcCreateRecord @ 0x140340E70 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x14012BC70 (RtlStringCchCopyA.c)
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WheaInitializeRecordHeader @ 0x140340850 (WheaInitializeRecordHeader.c)
 *     WheapAddRecoveryPacketToErrorRecord @ 0x1403408BC (WheapAddRecoveryPacketToErrorRecord.c)
 *     WheapAddSectionFromGenericErrorData @ 0x1403409D8 (WheapAddSectionFromGenericErrorData.c)
 */

__int64 __fastcall WheapCreateRecordFromGenericErrorData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v6; // r12
  unsigned int v7; // esi
  unsigned int v8; // ecx
  _DWORD *v9; // rdi
  const char *v10; // r8
  unsigned int v11; // r14d
  unsigned int v12; // eax
  int v13; // edx
  int v14; // eax
  char v15; // cl
  int v16; // r13d
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  bool v21; // cf
  unsigned int v22; // eax
  int v23; // ebx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r9
  _DWORD *v27; // rdi
  _DWORD Src[20]; // [rsp+40h] [rbp-51h] BYREF

  v6 = a4;
  memset(Src, 0, 0x48uLL);
  v7 = 20;
  v8 = *(_DWORD *)(a2 + 68);
  v9 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  if ( v8 < 0x14 )
  {
    v10 = "Error_Packet_Lenth_Too_Small";
LABEL_44:
    v23 = -1073741811;
    goto LABEL_45;
  }
  v11 = v9[3] + 20;
  if ( v11 < 0x14 )
  {
    v10 = "Overflow_Finding_Structured_Len";
    goto LABEL_44;
  }
  v12 = v9[1];
  if ( v12 && (v13 = v9[2]) != 0 )
  {
    if ( v11 > v12 )
    {
      v10 = "Unstructered_Data_Too_Soon";
      goto LABEL_44;
    }
    if ( v13 + v12 < v12 )
    {
      v10 = "Overflow_Unstructured_End";
      goto LABEL_44;
    }
    if ( v13 + v12 > v8 )
    {
      v10 = "Unstructured_Overruns_Buffer";
      goto LABEL_44;
    }
  }
  else if ( v11 > v8 )
  {
    v10 = "Error_Overruns_Buffer";
    goto LABEL_44;
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v10 = "Header_Overruns_Buffer";
    goto LABEL_44;
  }
  memset((void *)a3, 0, v6);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  v14 = *(_DWORD *)(a3 + 104);
  v15 = v14 ^ (*(_DWORD *)(a2 + 12) >> 1);
  *(_DWORD *)(a3 + 20) = v6;
  *(_DWORD *)(a3 + 104) = v14 ^ v15 & 4;
  v16 = (*v9 >> 4) & 0x3FF;
  if ( v16 )
  {
    while ( v7 + 64 >= v7 )
    {
      if ( v7 + 64 > v11 )
      {
        v10 = "Entry_Header_Overruns_Structure";
        goto LABEL_44;
      }
      v17 = (__int64)v9 + v7;
      v18 = *(_DWORD *)(v17 + 24);
      if ( *(_WORD *)(v17 + 20) == 768 )
      {
        v19 = v18 + 72;
        v20 = -1;
        v21 = v19 < 0x48;
      }
      else
      {
        v19 = v18 + 64;
        v20 = -1;
        v21 = v19 < 0x40;
      }
      if ( !v21 )
        v20 = v19;
      if ( v21 )
      {
        v10 = "Overflow_Entry_Length";
        goto LABEL_44;
      }
      v22 = v20 + v7;
      if ( v20 + v7 < v7 )
      {
        v10 = "Overflow_Next_Entry_Offset";
        goto LABEL_44;
      }
      v7 += v20;
      if ( v22 > v11 )
      {
        v10 = "Next_Entry_Overruns_Structure";
        goto LABEL_44;
      }
      v23 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v17, v20, 1);
      if ( v23 < 0 )
      {
        v10 = "Failed_Add_Section";
        goto LABEL_45;
      }
      ++Src[16];
      if ( !--v16 )
        goto LABEL_29;
    }
    v10 = "Overflow_Entry_Header_Offset";
    goto LABEL_44;
  }
LABEL_29:
  v24 = (unsigned int)v9[1];
  if ( (_DWORD)v24 && (v25 = v9[2]) != 0 )
  {
    v26 = (__int64)v9 + v24;
    v27 = (_DWORD *)a1;
    v23 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v26, v25, 0);
    if ( v23 < 0 )
    {
      v10 = "Failed_Add_Unstructured";
LABEL_45:
      RtlStringCchCopyA((NTSTRSAFE_PSTR)&Src[8], 0x20uLL, v10);
      goto LABEL_46;
    }
  }
  else
  {
    v27 = (_DWORD *)a1;
  }
  if ( !*(_DWORD *)(a2 + 20) )
    WheapAddRecoveryPacketToErrorRecord(v27, a3, v6);
  v23 = 0;
LABEL_46:
  Src[3] = 0;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 72;
  Src[5] = -2147483627;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 40;
  Src[17] = v23;
  WheaLogInternalEvent(Src);
  return (unsigned int)v23;
}
