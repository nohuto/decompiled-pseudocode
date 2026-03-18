/*
 * XREFs of EtwpSetCoverageSamplerInformation @ 0x1409060E0
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     ExCheckFullProcessInformationAccess @ 0x14069E6AC (ExCheckFullProcessInformationAccess.c)
 *     EtwpCovSampApplyBounds @ 0x140900538 (EtwpCovSampApplyBounds.c)
 *     EtwpCovSampSplitSegments @ 0x1409044AC (EtwpCovSampSplitSegments.c)
 *     EtwpCoverageSamplerInitialize @ 0x140904BA0 (EtwpCoverageSamplerInitialize.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409057D8 (EtwpCoverageSamplerSetBloomFilter.c)
 *     EtwpCoverageSamplerStart @ 0x140905978 (EtwpCoverageSamplerStart.c)
 *     EtwpCoverageSamplerStop @ 0x140905C54 (EtwpCoverageSamplerStop.c)
 */

__int64 __fastcall EtwpSetCoverageSamplerInformation(_OWORD *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  SIZE_T v4; // r15
  char *v6; // rsi
  int inserted; // edi
  __int64 v8; // r13
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  char v16; // cl
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // eax
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  unsigned int v35; // r9d
  char v36; // r11
  unsigned int v37; // r8d
  char i; // cl
  unsigned int v39; // edx
  _OWORD *v40; // rax
  char *v41; // rcx
  _OWORD *v42; // rax
  __int64 v43; // rcx
  char v45; // [rsp+50h] [rbp-318h]
  PVOID Object; // [rsp+58h] [rbp-310h] BYREF
  HANDLE v47; // [rsp+60h] [rbp-308h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-300h] BYREF
  _OWORD v49[3]; // [rsp+78h] [rbp-2F0h] BYREF
  _BYTE v50[8]; // [rsp+B0h] [rbp-2B8h] BYREF
  HANDLE v51; // [rsp+B8h] [rbp-2B0h]
  char v52; // [rsp+C0h] [rbp-2A8h] BYREF
  unsigned int v53; // [rsp+C8h] [rbp-2A0h] BYREF
  unsigned int v54; // [rsp+CCh] [rbp-29Ch] BYREF
  unsigned int v55; // [rsp+D0h] [rbp-298h] BYREF
  unsigned int v56; // [rsp+D4h] [rbp-294h] BYREF
  unsigned int v57; // [rsp+D8h] [rbp-290h] BYREF
  unsigned int v58; // [rsp+DCh] [rbp-28Ch] BYREF
  unsigned int v59; // [rsp+E0h] [rbp-288h] BYREF
  unsigned int v60; // [rsp+E4h] [rbp-284h] BYREF
  unsigned int v61; // [rsp+E8h] [rbp-280h] BYREF
  unsigned int v62; // [rsp+ECh] [rbp-27Ch] BYREF
  unsigned int v63; // [rsp+F0h] [rbp-278h] BYREF
  unsigned int v64; // [rsp+F4h] [rbp-274h] BYREF
  unsigned int v65; // [rsp+F8h] [rbp-270h] BYREF
  unsigned int v66; // [rsp+FCh] [rbp-26Ch] BYREF
  unsigned int v67; // [rsp+100h] [rbp-268h] BYREF
  unsigned int v68; // [rsp+104h] [rbp-264h] BYREF
  unsigned int v69; // [rsp+108h] [rbp-260h] BYREF
  unsigned int v70[64]; // [rsp+10Ch] [rbp-25Ch] BYREF
  __int16 v71; // [rsp+20Eh] [rbp-15Ah]
  __int16 v72; // [rsp+30Eh] [rbp-5Ah]
  _QWORD v73[4]; // [rsp+310h] [rbp-58h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0LL;
  Object = 0LL;
  v47 = 0LL;
  memset(v49, 0, sizeof(v49));
  v45 = 0;
  if ( (unsigned int)v4 < 0x10 )
    goto LABEL_2;
  *(_OWORD *)Handle = *Address;
  if ( BYTE5(Handle[0]) != 0xCF )
    goto LABEL_4;
  if ( BYTE4(Handle[0]) )
  {
    if ( BYTE4(Handle[0]) != 2 )
    {
      inserted = -1073741821;
      goto LABEL_50;
    }
    inserted = ExCheckFullProcessInformationAccess(AccessMode);
    if ( inserted < 0 )
      goto LABEL_50;
    if ( (_DWORD)v4 == 40 )
    {
      v49[0] = *Address;
      v49[1] = Address[1];
      *(_QWORD *)&v49[2] = *((_QWORD *)Address + 4);
      inserted = ObReferenceObjectByHandle(Handle[1], 1u, qword_140432510, AccessMode, &Object, 0LL);
      v6 = (char *)Object;
      if ( inserted >= 0 )
      {
        inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)Object, (__int64)&v49[1], AccessMode);
        if ( inserted >= 0 )
        {
LABEL_49:
          inserted = 0;
          goto LABEL_50;
        }
      }
      goto LABEL_50;
    }
LABEL_2:
    inserted = -1073741820;
    goto LABEL_50;
  }
  if ( !AccessMode )
  {
LABEL_4:
    inserted = -1073741637;
    goto LABEL_50;
  }
  inserted = ExCheckFullProcessInformationAccess(AccessMode);
  if ( inserted < 0 )
    goto LABEL_50;
  if ( (unsigned int)v4 < 0x280 )
    goto LABEL_2;
  v8 = 4LL;
  ProbeForWrite(Address, v4, 4u);
  v9 = Address;
  v10 = v50;
  v11 = 5LL;
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    *(v10 - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  EtwpCovSampApplyBounds(&v53, 0x400u, 0x10u, 0x4000u);
  EtwpCovSampApplyBounds(&v69, 0x100u, v12, v13);
  EtwpCovSampApplyBounds(v70, 0x800u, v14, 0x10000u);
  v15 = v70[0];
  if ( ((v70[0] - 1) & v70[0]) != 0 )
  {
    v16 = -1;
    if ( v70[0] )
    {
      do
      {
        ++v16;
        v15 >>= 1;
      }
      while ( v15 );
    }
    v15 = 1 << v16;
  }
  if ( (v52 & 0x40) != 0 )
    v15 = 0;
  v70[0] = v15;
  EtwpCovSampApplyBounds(&v61, 0x3E8u, 1u, 0x6B49D200u);
  EtwpCovSampApplyBounds(&v63, 1u, v17, v18);
  EtwpCovSampApplyBounds(&v65, 1u, v19, v20);
  EtwpCovSampApplyBounds(&v67, 1u, v21, v22);
  EtwpCovSampApplyBounds(&v62, 0, 0, v23);
  EtwpCovSampApplyBounds(&v64, 0, v24, v25);
  EtwpCovSampApplyBounds(&v66, 0, v26, v27);
  EtwpCovSampApplyBounds(&v68, 0, v28, v29);
  EtwpCovSampApplyBounds(&v56, 8u, 1u, 0x80u);
  EtwpCovSampApplyBounds(&v57, 0x20000u, 0x4000u, 0x100000u);
  EtwpCovSampApplyBounds(&v58, 4u, 2u, 0x100u);
  v32 = v58;
  if ( v52 < 0 )
    v32 = 0;
  v58 = v32;
  EtwpCovSampApplyBounds(&v59, 4u, v30, v31);
  EtwpCovSampApplyBounds(&v60, 0x10u, 4u, v33);
  EtwpCovSampApplyBounds(&v54, 0x400u, 0x10u, 0x8000000u);
  EtwpCovSampApplyBounds(&v55, 0x10000u, v34, v35);
  v37 = 4 * v69;
  if ( v54 >= 4 * v69 )
    v37 = v54;
  if ( ((v37 - 1) & v37) != 0 )
  {
    for ( i = v36; v37; v37 >>= 1 )
      ++i;
    v37 = 1 << i;
  }
  v54 = v37;
  v39 = v55;
  if ( ((v55 - 1) & v55) != 0 )
  {
    if ( v55 )
    {
      do
      {
        ++v36;
        v39 >>= 1;
      }
      while ( v39 );
    }
    v39 = 1 << v36;
  }
  if ( v39 < v37 )
    v39 = v37;
  v55 = v39;
  v72 = 0;
  v71 = 0;
  LODWORD(v49[0]) = 48;
  *((_QWORD *)&v49[0] + 1) = 0LL;
  DWORD2(v49[1]) = 0;
  *(_QWORD *)&v49[1] = 0LL;
  v49[2] = 0LL;
  inserted = ObCreateObject(0, qword_140432510, (int)v49, AccessMode, 0, 1216, 0, 0, &Object);
  v6 = (char *)Object;
  if ( inserted >= 0 )
  {
    EtwpCoverageSamplerInitialize((__int64)Object);
    v40 = v6 + 24;
    v41 = &v52;
    do
    {
      *v40 = *(_OWORD *)v41;
      v40[1] = *((_OWORD *)v41 + 1);
      v40[2] = *((_OWORD *)v41 + 2);
      v40[3] = *((_OWORD *)v41 + 3);
      v40[4] = *((_OWORD *)v41 + 4);
      v40[5] = *((_OWORD *)v41 + 5);
      v40[6] = *((_OWORD *)v41 + 6);
      v40 += 8;
      *(v40 - 1) = *((_OWORD *)v41 + 7);
      v41 += 128;
      --v8;
    }
    while ( v8 );
    *v40 = *(_OWORD *)v41;
    v40[1] = *((_OWORD *)v41 + 1);
    v40[2] = *((_OWORD *)v41 + 2);
    v40[3] = *((_OWORD *)v41 + 3);
    v40[4] = *((_OWORD *)v41 + 4);
    *((_DWORD *)v6 + 281) = EtwpCovSampSplitSegments((wchar_t *)v6 + 180, (__int64)(v6 + 960));
    *((_DWORD *)v6 + 280) = EtwpCovSampSplitSegments((wchar_t *)v6 + 52, (__int64)(v6 + 800));
    if ( !v73[0]
      || (inserted = EtwpCoverageSamplerSetBloomFilter((ULONG_PTR)v6, (__int64)v73, AccessMode), inserted >= 0) )
    {
      inserted = ObReferenceObjectByHandle(
                   (HANDLE)v73[3],
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   AccessMode,
                   Handle,
                   0LL);
      *((HANDLE *)v6 + 144) = Handle[0];
      if ( inserted >= 0 )
      {
        v45 = 1;
        inserted = EtwpCoverageSamplerStart(v6);
        if ( inserted >= 0 )
        {
          ObfReferenceObject(v6);
          inserted = ObInsertObject(v6, 0LL, 1u, 0, 0LL, &v47);
          if ( inserted >= 0 )
          {
            v51 = v47;
            v50[6] = 0;
            v42 = v50;
            v43 = 5LL;
            do
            {
              *Address = *v42;
              Address[1] = v42[1];
              Address[2] = v42[2];
              Address[3] = v42[3];
              Address[4] = v42[4];
              Address[5] = v42[5];
              Address[6] = v42[6];
              Address += 8;
              *(Address - 1) = v42[7];
              v42 += 8;
              --v43;
            }
            while ( v43 );
            v47 = 0LL;
            goto LABEL_49;
          }
        }
      }
    }
  }
LABEL_50:
  if ( v47 )
    NtClose(v47);
  if ( v6 )
  {
    if ( inserted < 0 && v45 )
      EtwpCoverageSamplerStop((__int64)v6);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)inserted;
}
