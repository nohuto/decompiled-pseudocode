/*
 * XREFs of MiDereferenceSubsectionProtos @ 0x1406CA300
 * Callers:
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiLocateSessionProtosInSubsection @ 0x140136FBC (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x140136FE8 (MiUpdatePerSessionProto.c)
 */

void __fastcall MiDereferenceSubsectionProtos(__int64 a1, unsigned int a2, __int64 **a3)
{
  __int64 *SessionProtosInSubsection; // rax
  __int64 *v6; // rbx
  __int64 v8; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
  {
    SessionProtosInSubsection = MiLocateSessionProtosInSubsection(a1, a2);
    v6 = SessionProtosInSubsection;
    if ( (*((_DWORD *)SessionProtosInSubsection + 20))-- == 1 )
    {
      MiUpdatePerSessionProto(*(_QWORD *)a1, a1, (__int64)SessionProtosInSubsection, 0);
      *((_DWORD *)v6 + 20) = *(_DWORD *)(a1 + 44);
      v8 = (__int64)*a3;
      v6[8] = a1;
      *v6 = v8;
      *a3 = v6;
    }
  }
}
