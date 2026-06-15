/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004F914
 * Callers:
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18003540C (-InitSpatialTechList@CSpatialProperties@@AEAAJXZ.c)
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180046948 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FC28 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FCF4 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FDC4 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FE74 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FF24 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180050000 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x18012F0B8 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v3; // edi
  CSpatialAudioMSHRTF *v4; // rax
  CSpatialAudioMSHRTF *v5; // rcx
  CSpatialAudioDolbyHeadphones *v6; // rax
  CSpatialAudioDolbyHeadphones *v7; // rcx
  CSpatialAudioDolbyStereo *v8; // rax
  CSpatialAudioDolbyStereo *v9; // rcx
  CSpatialAudioDolbyAtmosMAT *v10; // rax
  CSpatialAudioDolbyAtmosMAT *v11; // rcx
  CSpatialAudioDtsxHeadphones *v12; // rax
  CSpatialAudioDtsxHeadphones *v13; // rcx
  CSpatialAudioDtsxStereo *v14; // rax
  CSpatialAudioDtsxStereo *v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx

  v3 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates();
  EnterCriticalSection(&stru_1801B94C8);
  if ( ++dword_1801B94F0 == 1 )
  {
    v4 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v4, a2);
    else
      v5 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v5;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v6 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v6, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v7;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v8 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v8, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v9;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v10 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10 ? CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v10, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v11;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_28;
    ++g_ListOfSpatialTech[0];
    v12 = (CSpatialAudioDtsxHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12 ? CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(v12, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v13;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2]
      || ((++g_ListOfSpatialTech[0],
           (v14 = (CSpatialAudioDtsxStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow)) == 0LL)
        ? (v15 = 0LL)
        : (v15 = CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(v14, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v15) == 0LL) )
    {
LABEL_28:
      LeaveCriticalSection(&stru_1801B94C8);
LABEL_26:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v17);
      return v3;
    }
    v16 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v16 = g_ListOfSpatialTech[0];
  }
  LeaveCriticalSection(&stru_1801B94C8);
  v17 = 0LL;
  if ( !v16 )
    v17 = 2147942414LL;
  v3 = v17;
  if ( !v16 )
    goto LABEL_26;
  return v3;
}
