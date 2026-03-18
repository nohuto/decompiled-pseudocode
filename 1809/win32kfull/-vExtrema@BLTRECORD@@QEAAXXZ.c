/*
 * XREFs of ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C0270938
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // ebx
  int v2; // edi
  int v3; // r9d
  int v4; // r10d
  int v5; // edx
  int v6; // r8d

  v1 = *((_DWORD *)this + 33);
  v2 = *((_DWORD *)this + 31);
  v3 = *((_DWORD *)this + 32);
  v4 = *((_DWORD *)this + 30);
  v5 = v3 + *((_DWORD *)this + 34) - v4;
  v6 = v1 + *((_DWORD *)this + 35) - v2;
  *((_DWORD *)this + 36) = v5;
  *((_DWORD *)this + 37) = v6;
  *((_DWORD *)this + 56) = (v3 > v4) ^ (v3 <= v5);
  *((_DWORD *)this + 57) = (v1 > v2) ^ (v1 <= v6);
}
