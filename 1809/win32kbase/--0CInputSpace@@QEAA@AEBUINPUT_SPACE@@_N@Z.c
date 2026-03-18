/*
 * XREFs of ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C003DBA8
 * Callers:
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C00955B8 (--0CInputConfig@@AEAA@XZ.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x1C00A95E8 (--0CInputSpace@@QEAA@_N@Z.c)
 *     NtConfigureInputSpace @ 0x1C00ECB10 (NtConfigureInputSpace.c)
 * Callees:
 *     ??0CInputSpaceRegion@@QEAA@XZ @ 0x1C003DC10 (--0CInputSpaceRegion@@QEAA@XZ.c)
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
  *((_QWORD *)this + 151) = (char *)this + 1200;
  *((_QWORD *)this + 150) = (char *)this + 1200;
  return this;
}
