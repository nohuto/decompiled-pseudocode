/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14002FCE0
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14002FC70 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002F54C (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002F588 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14002FEC0 (memmove_s.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  errno_t v4; // eax
  errno_t v5; // eax
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 || a2 >= (int)qword_140086030 )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)qword_140086020 + a2);
  v3 = qword_140086030;
  if ( (_DWORD)v2 != (_DWORD)qword_140086030 - 1 )
  {
    v4 = memmove_s(
           (char *)qword_140086020 + 8 * v2,
           8LL * ((int)qword_140086030 - (int)v2),
           (char *)qword_140086020 + 8 * v2 + 8,
           8LL * ((int)qword_140086030 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v4);
    v5 = memmove_s(
           (char *)qword_140086028 + 8 * v2,
           8LL * ((int)qword_140086030 - (int)v2),
           (char *)qword_140086028 + 8 * v2 + 8,
           8LL * ((int)qword_140086030 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v3 = qword_140086030;
  }
  v6 = (void *)_o__recalloc(qword_140086020, v3 - 1, 8LL);
  if ( v6 || (_DWORD)qword_140086030 == 1 )
    qword_140086020 = v6;
  v7 = (void *)_o__recalloc(qword_140086028, (int)qword_140086030 - 1, 8LL);
  if ( v7 || (_DWORD)qword_140086030 == 1 )
    qword_140086028 = v7;
  result = 1LL;
  LODWORD(qword_140086030) = qword_140086030 - 1;
  return result;
}
