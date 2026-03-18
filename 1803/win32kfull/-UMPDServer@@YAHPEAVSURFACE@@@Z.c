/*
 * XREFs of ?UMPDServer@@YAHPEAVSURFACE@@@Z @ 0x1C011317C
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013B460 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vServer@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0018FEC (-vServer@UMPDOBJ@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall UMPDServer(struct SURFACE *a1)
{
  UMPDOBJ *v2; // rcx
  unsigned int v3; // ebx
  UMPDOBJ *v5; // [rsp+38h] [rbp+10h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v3 = 0;
  if ( v5 && *((_DWORD *)v5 + 106) )
  {
    UMPDOBJ::vServer(v2, (void *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)));
    v3 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
  return v3;
}
