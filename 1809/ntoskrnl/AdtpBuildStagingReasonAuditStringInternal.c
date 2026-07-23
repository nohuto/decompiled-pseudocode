/*
 * XREFs of AdtpBuildStagingReasonAuditStringInternal @ 0x140326DC8
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140325DDC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     AdtpFormatPrefix @ 0x140327180 (AdtpFormatPrefix.c)
 *     StringCchPrintfExW @ 0x140327260 (StringCchPrintfExW.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildStagingReasonAuditStringInternal(
        int a1,
        int a2,
        size_t a3,
        size_t a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  wchar_t *Buffer; // r14
  unsigned __int8 v9; // bl
  unsigned __int16 Length; // si
  unsigned int v11; // eax
  int v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  unsigned int v16; // r15d
  bool v17; // zf
  ULONG v18; // r12d
  size_t v19; // rdx
  unsigned int v20; // eax
  unsigned int v22; // ebx
  NTSTATUS appended; // eax
  unsigned __int16 v24; // r15
  unsigned int v25; // ebx
  _WORD *PoolWithTag; // rax
  _WORD *v27; // rsi
  __int64 v28; // rcx
  __int16 v29; // bx
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v33; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  size_t v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v42; // [rsp+F0h] [rbp-10h] BYREF

  Buffer = 0LL;
  v39 = a8;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  v38 = a4;
  Source.Buffer = (wchar_t *)&v42;
  Length = 2;
  pcchRemaining = a3;
  v33.Buffer = (wchar_t *)L"-";
  v11 = a5;
  *(_QWORD *)&Destination.Length = 0LL;
  LOBYTE(v31) = 0;
  *(_DWORD *)&Source.Length = 1966080;
  wcscpy(pszFormat, L"# %d");
  *(_DWORD *)&v33.Length = 131074;
  while ( 1 )
  {
    v11 >>= 1;
    if ( !v11 )
      break;
    ++v9;
  }
  v12 = AdtpBuildAccessesString(a1, a2, a5, 2, &DestinationString, 0LL, 0LL, 0LL, (__int64)&v31);
  if ( v12 < 0 )
    goto LABEL_33;
  v36 = DestinationString.Length >> 1;
  v13 = *(_DWORD *)(a7 + 4LL * v9);
  v14 = HIBYTE(v13);
  v15 = v13 & 0xFF0000;
  v16 = v14 & 0x7F;
  if ( v15 > 0x200000 )
  {
    if ( v15 == 3145728 )
      goto LABEL_25;
    if ( v15 != 0x400000 )
    {
      if ( v15 == 5242880 )
        goto LABEL_25;
      if ( v15 != 6291456 && v15 != 7340032 )
      {
        v17 = v15 == 0x800000;
LABEL_22:
        if ( !v17 )
        {
          v18 = 1809;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v18 = 1814;
    goto LABEL_26;
  }
  if ( v15 == 0x200000 || v15 == 0x10000 )
    goto LABEL_24;
  if ( v15 != 0x20000 )
  {
    if ( v15 == 196608 )
    {
      v18 = 1816;
      goto LABEL_26;
    }
    if ( v15 != 327680 )
    {
      if ( v15 == 393216 )
      {
        v18 = 1815;
        goto LABEL_26;
      }
      if ( v15 != 458752 )
      {
        v17 = v15 == 0x100000;
        goto LABEL_22;
      }
    }
  }
LABEL_25:
  v18 = 1813;
LABEL_26:
  v12 = AdtpFormatPrefix(&Source, v18);
  if ( v12 >= 0 )
  {
    if ( v15 == 196608 || v15 == 393216 )
      v19 = v38;
    else
      v19 = pcchRemaining;
    v20 = *(_DWORD *)(v19 + 8);
    if ( !v20 )
      goto LABEL_41;
    if ( v16 >= v20 )
    {
      v12 = -1073741811;
      goto LABEL_33;
    }
    v33 = *(UNICODE_STRING *)(*(_QWORD *)(v19 + 16) + 16LL * v16);
    Length = v33.Length;
    if ( v33.Length <= 2u )
    {
LABEL_41:
      LODWORD(v30) = v16;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v30) >= 0 )
      {
        v33.MaximumLength = 40;
        Length = 2 * (20 - pcchRemaining);
        v33.Length = Length;
        v33.Buffer = pszDest;
      }
    }
    v22 = Length + 54;
    Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x6B416553u);
    Buffer = Destination.Buffer;
    if ( Destination.Buffer )
    {
      Destination.Length = 0;
      Destination.MaximumLength = 2 * v22;
      RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( v18 != 1809 )
        RtlAppendUnicodeStringToString(&Destination, &v33);
      appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
      v24 = Destination.Length;
      v12 = appended;
      v25 = v36 + 1 + (Destination.Length >> 1);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v25, 0x6B416553u);
      v27 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( DestinationString.Length )
          memmove(PoolWithTag, DestinationString.Buffer, DestinationString.Length);
        Buffer = Destination.Buffer;
        if ( v24 )
          memmove((char *)v27 + DestinationString.Length, Destination.Buffer, v24);
        v28 = v39;
        v27[v25 - 1] = 0;
        v29 = 2 * v25;
        *(_WORD *)(v28 + 2) = v29;
        *(_QWORD *)(v28 + 8) = v27;
        *(_WORD *)v28 = v29 - 2;
      }
      else
      {
        Buffer = Destination.Buffer;
        v12 = -1073741801;
      }
    }
    else
    {
      v12 = -1073741801;
    }
  }
LABEL_33:
  if ( (_BYTE)v31 && DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)v12;
}
