/*
 * XREFs of ??0CFrameInfo@@QEAA@XZ @ 0x1800E38C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CRateInfo@@QEAAXXZ @ 0x1800A4AB4 (-Reset@CRateInfo@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

CFrameInfo *__fastcall CFrameInfo::CFrameInfo(CFrameInfo *this)
{
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_DWORD *)this + 276) = 0;
  memset_0(this, 0, 0x438uLL);
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_DWORD *)this + 292) = 0;
  *((_BYTE *)this + 1176) = 0;
  *((_QWORD *)this + 148) = 0LL;
  *((_BYTE *)this + 1192) = 0;
  *((_WORD *)this + 600) = 0;
  CRateInfo::Reset((CFrameInfo *)((char *)this + 1208));
  return this;
}
