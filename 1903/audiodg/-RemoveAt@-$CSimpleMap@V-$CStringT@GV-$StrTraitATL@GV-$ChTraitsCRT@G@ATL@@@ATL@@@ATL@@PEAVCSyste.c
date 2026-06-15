/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x14002FD60
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14002FCF0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002F5CC (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002F608 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14002FF40 (memmove_s.c)
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
  if ( a2 < 0 || a2 >= (int)qword_140087030 )
    return 0LL;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)qword_140087020 + a2);
  v3 = qword_140087030;
  if ( (_DWORD)v2 != (_DWORD)qword_140087030 - 1 )
  {
    v4 = memmove_s(
           (char *)qword_140087020 + 8 * v2,
           8LL * ((int)qword_140087030 - (int)v2),
           (char *)qword_140087020 + 8 * v2 + 8,
           8LL * ((int)qword_140087030 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v4);
    v5 = memmove_s(
           (char *)qword_140087028 + 8 * v2,
           8LL * ((int)qword_140087030 - (int)v2),
           (char *)qword_140087028 + 8 * v2 + 8,
           8LL * ((int)qword_140087030 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v3 = qword_140087030;
  }
  v6 = (void *)_o__recalloc(qword_140087020, v3 - 1, 8LL);
  if ( v6 || (_DWORD)qword_140087030 == 1 )
    qword_140087020 = v6;
  v7 = (void *)_o__recalloc(qword_140087028, (int)qword_140087030 - 1, 8LL);
  if ( v7 || (_DWORD)qword_140087030 == 1 )
    qword_140087028 = v7;
  result = 1LL;
  LODWORD(qword_140087030) = qword_140087030 - 1;
  return result;
}
