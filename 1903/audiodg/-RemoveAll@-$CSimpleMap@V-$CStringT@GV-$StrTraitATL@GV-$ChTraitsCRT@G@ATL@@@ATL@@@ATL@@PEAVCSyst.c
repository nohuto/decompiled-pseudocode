/*
 * XREFs of ?RemoveAll@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXXZ @ 0x14001554C
 * Callers:
 *     _dynamic_atexit_destructor_for__SadMap__ @ 0x14001B480 (_dynamic_atexit_destructor_for__SadMap__.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002F5CC (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAll()
{
  char *v0; // rcx
  int i; // ebx

  v0 = (char *)qword_140087020;
  if ( qword_140087020 )
  {
    for ( i = 0; i < (int)qword_140087030; ++i )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(&v0[8 * i]);
      v0 = (char *)qword_140087020;
    }
    free(v0);
    qword_140087020 = 0LL;
  }
  if ( qword_140087028 )
  {
    free(qword_140087028);
    qword_140087028 = 0LL;
  }
  LODWORD(qword_140087030) = 0;
}
