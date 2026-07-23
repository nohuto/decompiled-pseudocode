/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1405CE7B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400165E0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     swscanf_s @ 0x14019BD00 (swscanf_s.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpQueryProcessorInformationCounters @ 0x1405CEF74 (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x140692680 (PcwAddInstance.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  bool v3; // r12
  bool v4; // si
  bool v5; // r14
  bool v6; // dl
  int v7; // ecx
  __int64 v8; // rax
  struct _PCW_BUFFER *v9; // r15
  ULONG ActiveProcessorCount; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  unsigned __int64 Mask; // r12
  unsigned int v16; // r8d
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r10
  __int64 FirstSetRightGroupAffinity; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  int result; // eax
  __int64 v24; // rdi
  __int64 *v25; // rdx
  const UNICODE_STRING *v26; // rdx
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v28; // [rsp+38h] [rbp-D0h]
  __int16 v29; // [rsp+39h] [rbp-CFh]
  USHORT Count[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v31; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v35; // [rsp+58h] [rbp-B0h]
  PPCW_BUFFER Buffer; // [rsp+60h] [rbp-A8h]
  struct _PCW_DATA v37; // [rsp+68h] [rbp-A0h] BYREF
  struct _PCW_DATA v38; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp-70h] BYREF
  struct _PCW_DATA v41; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_DATA v42; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v43[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v44[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v45; // [rsp+248h] [rbp+140h] BYREF
  __int64 v46; // [rsp+250h] [rbp+148h]
  __int64 v47; // [rsp+258h] [rbp+150h]
  __int64 v48; // [rsp+260h] [rbp+158h]
  int v49; // [rsp+268h] [rbp+160h]
  __int64 v50; // [rsp+270h] [rbp+168h]
  __int64 v51; // [rsp+278h] [rbp+170h]
  int v52; // [rsp+280h] [rbp+178h]
  int v53; // [rsp+284h] [rbp+17Ch]
  int v54; // [rsp+288h] [rbp+180h]
  __int64 v55; // [rsp+290h] [rbp+188h]
  __int64 v56; // [rsp+298h] [rbp+190h]
  __int64 v57; // [rsp+2A0h] [rbp+198h]
  __int64 v58; // [rsp+2A8h] [rbp+1A0h]
  __int64 v59; // [rsp+2B0h] [rbp+1A8h]
  __int64 v60; // [rsp+2B8h] [rbp+1B0h]
  __int64 v61; // [rsp+2C0h] [rbp+1B8h]
  int v62; // [rsp+2CCh] [rbp+1C4h]
  int v63; // [rsp+2D0h] [rbp+1C8h]
  unsigned int v64; // [rsp+2D8h] [rbp+1D0h]
  unsigned int v65; // [rsp+2DCh] [rbp+1D4h]
  __int64 v66; // [rsp+2E0h] [rbp+1D8h]
  __int64 v67; // [rsp+2E8h] [rbp+1E0h]
  __int64 v68; // [rsp+2F0h] [rbp+1E8h]
  __int64 v69; // [rsp+2F8h] [rbp+1F0h]
  int v70; // [rsp+300h] [rbp+1F8h]
  int v71; // [rsp+304h] [rbp+1FCh]
  wchar_t pszDest[16]; // [rsp+308h] [rbp+200h] BYREF

  v3 = 0;
  v29 = 0;
  v4 = 0;
  v28 = 0;
  v5 = 0;
  v32 = 0;
  v6 = 0;
  v31 = 0;
  v7 = a1 - 2;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 0;
    v8 = *a2;
    v9 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v9;
    v3 = (v8 & 0x100E0FF05LL) != 0;
    v4 = (v8 & 0xC00F0000) != 0;
    HIBYTE(v29) = v3;
    LOBYTE(v29) = v4;
    v5 = (v8 & 0x3F000000) != 0;
    v28 = v5;
    v6 = swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v31, &v32) == 2;
  }
  else
  {
    v9 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v9;
  }
  if ( !v6 )
  {
    memset(v44, 0, sizeof(v44));
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    LOWORD(v11) = 0;
    v12 = 0LL;
    v31 = 0;
    v13 = ActiveProcessorCount;
    LODWORD(v33) = ActiveProcessorCount;
    v38.Data = 0LL;
    v14 = 0LL;
    v37.Data = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_20:
      if ( v13 > 1 )
      {
        v44[0] /= (unsigned __int64)v13;
        v44[1] /= (unsigned __int64)v13;
        v44[2] /= (unsigned __int64)v13;
        v44[3] /= (unsigned __int64)v13;
        v44[6] /= (unsigned __int64)v13;
        v44[5] /= (unsigned __int64)v13;
        v44[9] /= (unsigned __int64)v13;
        v44[10] /= (unsigned __int64)v13;
        v44[11] /= (unsigned __int64)v13;
        v44[15] /= (unsigned __int64)v13;
        HIDWORD(v44[16]) /= v13;
        LODWORD(v44[17]) /= v13;
      }
      if ( v5 )
      {
        LODWORD(v44[18]) = v14 / v13;
        HIDWORD(v44[18]) = v12 / v13;
        v44[19] /= (unsigned __int64)v13;
        v44[20] /= (unsigned __int64)v13;
      }
      if ( v4 )
        LODWORD(v44[23]) /= v13;
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v14);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v37.Data = v44;
      v37.Size = 192;
      return PcwAddInstance(v9, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v37);
    }
    while ( 1 )
    {
      KeQueryNodeActiveAffinity(v11, &Affinity, Count);
      Mask = Affinity.Mask;
      if ( Affinity.Mask )
      {
        memset(v43, 0, sizeof(v43));
        v16 = Count[0];
        v17 = 0LL;
        v32 = 0;
        v18 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        if ( Count[0] )
        {
          while ( 1 )
          {
            FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((__int64)&Affinity);
            v20 = KiProcessorBlock[FirstSetRightGroupAffinity];
            v21 = ~*(_QWORD *)(v20 + 200);
            v22 = v21 & Mask;
            LOBYTE(v21) = HIBYTE(v29);
            Affinity.Mask = v22;
            ExpQueryProcessorInformationCounters(v20, v21, v4, v5, (__int64)&v45);
            LODWORD(Data) = v32;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v31, Data);
            RtlInitUnicodeString(&DestinationString, pszDest);
            v41.Size = 192;
            v41.Data = &v45;
            result = PcwAddInstance(v9, &DestinationString, FirstSetRightGroupAffinity, 1u, &v41);
            if ( result < 0 )
              return result;
            v43[13] += v59;
            v44[0] += v45;
            v44[1] += v46;
            v44[2] += v47;
            v44[3] += v48;
            LODWORD(v44[4]) += v49;
            v44[6] += v51;
            HIDWORD(v44[7]) += v53;
            LODWORD(v44[8]) += v54;
            v43[11] += v57;
            v43[14] += v60;
            v43[21] += v68;
            v43[22] += v69;
            v43[15] += v61;
            HIDWORD(v43[16]) += v62;
            LODWORD(v43[17]) += v63;
            v35 += v64;
            v34 += v65;
            v43[19] += v66;
            v43[20] += v67;
            LODWORD(v43[23]) += v70;
            v43[0] += v45;
            v43[1] += v46;
            v43[2] += v47;
            v43[3] += v48;
            LODWORD(v43[4]) += v49;
            v43[6] += v51;
            HIDWORD(v43[7]) += v53;
            LODWORD(v43[8]) += v54;
            v43[5] += v50;
            LODWORD(v43[7]) += v52;
            v43[9] += v55;
            v43[12] += v58;
            v43[10] += v56;
            HIDWORD(v43[23]) |= v71;
            v44[5] += v50;
            LODWORD(v44[7]) += v52;
            HIDWORD(v44[16]) += v62;
            HIDWORD(v44[23]) |= v71;
            v44[9] += v55;
            v44[12] += v58;
            v44[10] += v56;
            v44[15] += v61;
            v12 = (unsigned __int64)v38.Data + v65;
            v44[19] += v66;
            v44[13] += v59;
            v44[11] += v57;
            v44[14] += v60;
            v44[21] += v68;
            v44[22] += v69;
            LODWORD(v44[17]) += v63;
            v37.Data = (char *)v37.Data + v64;
            v44[20] += v67;
            LODWORD(v44[23]) += v70;
            v16 = Count[0];
            v4 = v29;
            v5 = v28;
            v9 = Buffer;
            Mask = Affinity.Mask;
            v38.Data = (const void *)v12;
            if ( ++v32 >= (unsigned int)Count[0] )
            {
              v17 = v34;
              v18 = v35;
              break;
            }
          }
        }
        if ( Count[0] > 1u )
        {
          v43[0] /= (unsigned __int64)Count[0];
          v43[1] /= (unsigned __int64)Count[0];
          v43[2] /= (unsigned __int64)Count[0];
          v43[3] /= (unsigned __int64)Count[0];
          v43[6] /= (unsigned __int64)Count[0];
          v43[5] /= (unsigned __int64)Count[0];
          v43[9] /= (unsigned __int64)Count[0];
          v43[10] /= (unsigned __int64)Count[0];
          v43[11] /= (unsigned __int64)Count[0];
          v43[15] /= (unsigned __int64)Count[0];
          HIDWORD(v43[16]) /= v16;
          LODWORD(v43[17]) /= v16;
        }
        v5 = v28;
        if ( v28 )
        {
          LODWORD(v43[18]) = v18 / Count[0];
          HIDWORD(v43[18]) = v17 / Count[0];
          v43[19] /= (unsigned __int64)Count[0];
          v43[20] /= (unsigned __int64)Count[0];
        }
        v4 = v29;
        if ( (_BYTE)v29 )
          LODWORD(v43[23]) /= v16;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v31);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v9 = Buffer;
        v42.Data = v43;
        v42.Size = 192;
        result = PcwAddInstance(Buffer, &DestinationString, v31 + KeMaximumProcessors, 1u, &v42);
        if ( result < 0 )
          return result;
      }
      v11 = v31 + 1;
      v31 = v11;
      if ( v11 >= (unsigned __int16)KeNumberNodes )
      {
        v13 = v33;
        v14 = (unsigned __int64)v37.Data;
        goto LABEL_20;
      }
    }
  }
  v24 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v24 >= (unsigned int)KeNumberProcessors_0 )
    return -1073741275;
  v25 = &v45;
  LOBYTE(v25) = v3;
  ExpQueryProcessorInformationCounters(KiProcessorBlock[v24], (_DWORD)v25, v4, v5, (__int64)&v45);
  v26 = (const UNICODE_STRING *)a2[1];
  v38.Data = &v45;
  v38.Size = 192;
  result = PcwAddInstance(v9, v26, v24, 1u, &v38);
  if ( result >= 0 )
    return 0;
  return result;
}
