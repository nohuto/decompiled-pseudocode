/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1405C90C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400FFEE0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     swscanf_s @ 0x1401A6B50 (swscanf_s.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpQueryProcessorInformationCounters @ 0x1405C9A04 (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x1406B09B0 (PcwAddInstance.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  bool v4; // si
  int v5; // r8d
  int v6; // r9d
  bool v7; // r12
  bool v8; // r14
  bool v9; // cl
  int v10; // edi
  __int64 v11; // rax
  struct _PCW_BUFFER *v12; // r15
  __int64 v13; // rdi
  int result; // eax
  _QWORD *v15; // rdx
  const UNICODE_STRING *v16; // rdx
  ULONG ActiveProcessorCount; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rbx
  unsigned int v20; // r8d
  unsigned __int64 v21; // r9
  unsigned __int64 Mask; // r12
  unsigned int v23; // r8d
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r10
  __int64 FirstSetRightGroupAffinity; // rbx
  int v27; // r9d
  int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // r12
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v33; // [rsp+38h] [rbp-D0h]
  __int16 v34; // [rsp+39h] [rbp-CFh]
  USHORT Count[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+40h] [rbp-C8h] BYREF
  int v37; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v38; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-B0h]
  PPCW_BUFFER Buffer; // [rsp+60h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _PCW_DATA v43; // [rsp+78h] [rbp-90h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+88h] [rbp-80h] BYREF
  struct _PCW_DATA v45; // [rsp+98h] [rbp-70h] BYREF
  struct _PCW_DATA v46; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_DATA v47; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v48[26]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v49[26]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v50[26]; // [rsp+268h] [rbp+160h] BYREF
  wchar_t pszDest[16]; // [rsp+338h] [rbp+230h] BYREF

  Affinity.Mask = 0LL;
  v4 = 0;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(v48, 0, 0xC8uLL);
  memset(v49, 0, 0xC8uLL);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v50, 0, 0xC8uLL);
  v7 = 0;
  v34 = 0;
  v33 = 0;
  v8 = 0;
  v37 = 0;
  v9 = 0;
  v36 = 0;
  v10 = a1 - 2;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 0;
    v11 = *a2;
    v12 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v12;
    v7 = (v11 & 0x100E0FF05LL) != 0;
    HIBYTE(v34) = v7;
    v4 = (v11 & 0xC00F0000) != 0;
    v8 = (v11 & 0x63F000000LL) != 0;
    LOBYTE(v34) = v4;
    v33 = v8;
    v9 = swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v36, &v37) == 2;
  }
  else
  {
    v12 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v12;
  }
  if ( !v9 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    LOWORD(v18) = 0;
    v19 = 0LL;
    v36 = 0;
    v20 = ActiveProcessorCount;
    LODWORD(v38) = ActiveProcessorCount;
    v45.Data = 0LL;
    v21 = 0LL;
    v43.Data = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_25:
      if ( v20 > 1 )
      {
        v49[0] /= (unsigned __int64)v20;
        v49[1] /= (unsigned __int64)v20;
        v49[2] /= (unsigned __int64)v20;
        v49[3] /= (unsigned __int64)v20;
        v49[6] /= (unsigned __int64)v20;
        v49[5] /= (unsigned __int64)v20;
        v49[9] /= (unsigned __int64)v20;
        v49[10] /= (unsigned __int64)v20;
        v49[11] /= (unsigned __int64)v20;
        v49[15] /= (unsigned __int64)v20;
        HIDWORD(v49[16]) /= v20;
        LODWORD(v49[17]) /= v20;
      }
      if ( v8 )
      {
        LODWORD(v49[18]) = v21 / v20;
        HIDWORD(v49[18]) = v19 / v20;
        v49[19] /= (unsigned __int64)v20;
        v49[20] /= (unsigned __int64)v20;
        v49[24] /= (unsigned __int64)v20;
      }
      if ( v4 )
        LODWORD(v49[23]) /= v20;
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v21);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v43.Data = v49;
      v43.Size = 200;
      return PcwAddInstance(v12, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v43);
    }
    while ( 1 )
    {
      KeQueryNodeActiveAffinity(v18, &Affinity, Count);
      Mask = Affinity.Mask;
      if ( Affinity.Mask )
      {
        memset(v48, 0, 0xC8uLL);
        v23 = Count[0];
        v24 = 0LL;
        v37 = 0;
        v25 = 0LL;
        v39 = 0LL;
        v40 = 0LL;
        if ( Count[0] )
        {
          while ( 1 )
          {
            FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((__int64)&Affinity);
            LOBYTE(v27) = v8;
            LOBYTE(v28) = v4;
            v29 = KiProcessorBlock[FirstSetRightGroupAffinity];
            v30 = ~*(_QWORD *)(v29 + 200);
            v31 = v30 & Mask;
            LOBYTE(v30) = HIBYTE(v34);
            Affinity.Mask = v31;
            ExpQueryProcessorInformationCounters(v29, v30, v28, v27, (__int64)v50);
            LODWORD(Data) = v37;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v36, Data);
            RtlInitUnicodeString(&DestinationString, pszDest);
            v46.Size = 200;
            v46.Data = v50;
            result = PcwAddInstance(v12, &DestinationString, FirstSetRightGroupAffinity, 1u, &v46);
            if ( result < 0 )
              return result;
            v48[11] += v50[11];
            v49[0] += v50[0];
            v49[1] += v50[1];
            v49[2] += v50[2];
            v49[3] += v50[3];
            LODWORD(v49[4]) += LODWORD(v50[4]);
            v49[6] += v50[6];
            HIDWORD(v49[7]) += HIDWORD(v50[7]);
            v48[14] += v50[14];
            v48[21] += v50[21];
            v48[22] += v50[22];
            v48[15] += v50[15];
            HIDWORD(v48[16]) += HIDWORD(v50[16]);
            LODWORD(v48[17]) += LODWORD(v50[17]);
            v40 += LODWORD(v50[18]);
            v39 += HIDWORD(v50[18]);
            v48[19] += v50[19];
            v48[20] += v50[20];
            v48[24] += v50[24];
            LODWORD(v48[23]) += LODWORD(v50[23]);
            v48[0] += v50[0];
            v48[1] += v50[1];
            v48[2] += v50[2];
            v48[3] += v50[3];
            LODWORD(v48[4]) += LODWORD(v50[4]);
            v48[6] += v50[6];
            HIDWORD(v48[7]) += HIDWORD(v50[7]);
            LODWORD(v48[8]) += LODWORD(v50[8]);
            v48[5] += v50[5];
            LODWORD(v48[7]) += LODWORD(v50[7]);
            v48[9] += v50[9];
            v48[12] += v50[12];
            v48[10] += v50[10];
            v48[13] += v50[13];
            HIDWORD(v48[23]) |= HIDWORD(v50[23]);
            LODWORD(v49[8]) += LODWORD(v50[8]);
            v49[5] += v50[5];
            LODWORD(v49[17]) += LODWORD(v50[17]);
            HIDWORD(v49[23]) |= HIDWORD(v50[23]);
            LODWORD(v49[7]) += LODWORD(v50[7]);
            v49[9] += v50[9];
            v49[12] += v50[12];
            v49[10] += v50[10];
            v49[13] += v50[13];
            HIDWORD(v49[16]) += HIDWORD(v50[16]);
            v19 = (unsigned __int64)v45.Data + HIDWORD(v50[18]);
            v49[20] += v50[20];
            v49[11] += v50[11];
            v49[14] += v50[14];
            v49[21] += v50[21];
            v49[22] += v50[22];
            v49[15] += v50[15];
            v43.Data = (char *)v43.Data + LODWORD(v50[18]);
            v49[19] += v50[19];
            v49[24] += v50[24];
            LODWORD(v49[23]) += LODWORD(v50[23]);
            v23 = Count[0];
            v4 = v34;
            v8 = v33;
            v12 = Buffer;
            Mask = Affinity.Mask;
            v45.Data = (const void *)v19;
            if ( ++v37 >= (unsigned int)Count[0] )
            {
              v24 = v39;
              v25 = v40;
              break;
            }
          }
        }
        if ( Count[0] > 1u )
        {
          v48[0] /= (unsigned __int64)Count[0];
          v48[1] /= (unsigned __int64)Count[0];
          v48[2] /= (unsigned __int64)Count[0];
          v48[3] /= (unsigned __int64)Count[0];
          v48[6] /= (unsigned __int64)Count[0];
          v48[5] /= (unsigned __int64)Count[0];
          v48[9] /= (unsigned __int64)Count[0];
          v48[10] /= (unsigned __int64)Count[0];
          v48[11] /= (unsigned __int64)Count[0];
          v48[15] /= (unsigned __int64)Count[0];
          HIDWORD(v48[16]) /= v23;
          LODWORD(v48[17]) /= v23;
        }
        v8 = v33;
        if ( v33 )
        {
          LODWORD(v48[18]) = v25 / Count[0];
          HIDWORD(v48[18]) = v24 / Count[0];
          v48[19] /= (unsigned __int64)Count[0];
          v48[20] /= (unsigned __int64)Count[0];
          v48[24] /= (unsigned __int64)Count[0];
        }
        v4 = v34;
        if ( (_BYTE)v34 )
          LODWORD(v48[23]) /= v23;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v36);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v12 = Buffer;
        v47.Data = v48;
        v47.Size = 200;
        result = PcwAddInstance(Buffer, &DestinationString, v36 + KeMaximumProcessors, 1u, &v47);
        if ( result < 0 )
          return result;
      }
      v18 = v36 + 1;
      v36 = v18;
      if ( v18 >= (unsigned __int16)KeNumberNodes )
      {
        v20 = v38;
        v21 = (unsigned __int64)v43.Data;
        goto LABEL_25;
      }
    }
  }
  v13 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v13 >= (unsigned int)KeNumberProcessors_0 )
    return -1073741275;
  v15 = v50;
  LOBYTE(v6) = v8;
  LOBYTE(v15) = v7;
  LOBYTE(v5) = v4;
  ExpQueryProcessorInformationCounters(KiProcessorBlock[v13], (_DWORD)v15, v5, v6, (__int64)v50);
  v16 = (const UNICODE_STRING *)a2[1];
  v45.Data = v50;
  v45.Size = 200;
  result = PcwAddInstance(v12, v16, v13, 1u, &v45);
  if ( result >= 0 )
    return 0;
  return result;
}
