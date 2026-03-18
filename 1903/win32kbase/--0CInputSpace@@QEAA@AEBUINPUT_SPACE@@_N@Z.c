/*
 * XREFs of ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0065B08
 * Callers:
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C0060860 (--0CInputConfig@@AEAA@XZ.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     NtConfigureInputSpace @ 0x1C0113620 (NtConfigureInputSpace.c)
 * Callees:
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C0065B78 (--0CInputSpaceRegion@@QEAA@XZ.c)
 */

CInputSpace *__fastcall CInputSpace::CInputSpace(CInputSpace *this, const struct INPUT_SPACE *a2, char a3)
{
  int v5; // eax

  *(_QWORD *)this = *(_QWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 2) = v5;
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 24));
  CInputSpaceRegion::CInputSpaceRegion((CInputSpace *)((char *)this + 608));
  *((_DWORD *)this + 299) = 0;
  *((_BYTE *)this + 1192) = a3;
  *((_QWORD *)this + 151) = 0LL;
  *((_QWORD *)this + 151) = (char *)this + 1200;
  *((_QWORD *)this + 150) = (char *)this + 1200;
  return this;
}
