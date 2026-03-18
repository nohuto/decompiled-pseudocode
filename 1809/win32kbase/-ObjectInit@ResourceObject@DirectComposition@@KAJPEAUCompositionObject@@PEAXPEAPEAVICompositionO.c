/*
 * XREFs of ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0012F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00107D4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  _DWORD *v3; // rdi
  int v5; // ebp
  DirectComposition::CConnection *DefaultConnection; // rax
  int SystemResource; // edi

  v3 = (_DWORD *)((char *)a1 + 24);
  v5 = (int)a2;
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    memset(v3, 0, 0x28uLL);
    *(_QWORD *)v3 = &DirectComposition::CSharedSystemResource::`vftable';
    v3[6] = 0;
  }
  *a3 = (struct ICompositionObject *)v3;
  *((_DWORD *)a1 + 12) = 0;
  *((_DWORD *)a1 + 13) = 0;
  *((_DWORD *)a1 + 14) = 0;
  KeEnterCriticalRegion();
  *((_DWORD *)a1 + 9) = v5;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  *((_QWORD *)a1 + 5) = DefaultConnection;
  if ( DefaultConnection )
    SystemResource = DirectComposition::CConnection::CreateSystemResource(
                       DefaultConnection,
                       *((_DWORD *)a1 + 9),
                       (struct CompositionObject *)((char *)a1 + 48));
  else
    SystemResource = -1073741790;
  if ( SystemResource >= 0 )
    *((_BYTE *)a1 + 32) = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)SystemResource;
}
