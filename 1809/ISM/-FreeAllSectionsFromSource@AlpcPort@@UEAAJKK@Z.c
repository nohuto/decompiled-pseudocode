/*
 * XREFs of ?FreeAllSectionsFromSource@AlpcPort@@UEAAJKK@Z @ 0x1800A0C70
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeSectionListEntry@AlpcPort@@AEAAJPEAUSectionListEntry@1@@Z @ 0x1800A0BC8 (-FreeSectionListEntry@AlpcPort@@AEAAJPEAUSectionListEntry@1@@Z.c)
 */

__int64 __fastcall AlpcPort::FreeAllSectionsFromSource(AlpcPort *this, int a2, int a3)
{
  struct AlpcPort::SectionListEntry *v3; // rsi
  struct AlpcPort::SectionListEntry *v5; // rbx
  unsigned int v8; // edi
  struct AlpcPort::SectionListEntry *v9; // rdx
  int v10; // eax

  v3 = (AlpcPort *)((char *)this + 24);
  v5 = (struct AlpcPort::SectionListEntry *)*((_QWORD *)this + 3);
  v8 = 0;
  while ( v5 != v3 )
  {
    v9 = v5;
    v5 = *(struct AlpcPort::SectionListEntry **)v5;
    if ( *((_DWORD *)v9 + 10) == a2 && *((_DWORD *)v9 + 11) == a3 )
    {
      v10 = AlpcPort::FreeSectionListEntry(this, v9);
      if ( v10 < 0 && !v8 )
        v8 = v10;
    }
  }
  return v8;
}
