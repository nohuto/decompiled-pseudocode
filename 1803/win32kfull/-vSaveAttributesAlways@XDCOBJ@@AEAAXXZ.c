/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4
 * Callers:
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0113434 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0117F68 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C011AF50 (NtGdiStartPage.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C011B134 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     NtGdiEndPage @ 0x1C0248C70 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rdx
  _OWORD *v4; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_OWORD **)(v2 + 80);
  if ( v3 < MmSystemRangeStart )
  {
    v4 = (_OWORD *)(v2 + 976);
    v5 = 3LL;
    do
    {
      *v4 = *v3;
      v4[1] = v3[1];
      v4[2] = v3[2];
      v4[3] = v3[3];
      v4[4] = v3[4];
      v4[5] = v3[5];
      v4[6] = v3[6];
      v4 += 8;
      *(v4 - 1) = v3[7];
      v3 += 8;
      --v5;
    }
    while ( v5 );
    *v4 = *v3;
    v4[1] = v3[1];
    *(_QWORD *)(*(_QWORD *)this + 968LL) = *(_QWORD *)(*(_QWORD *)this + 80LL);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 976LL;
    *((_DWORD *)this + 2) = 1;
  }
}
