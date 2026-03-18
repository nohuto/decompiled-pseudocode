/*
 * XREFs of ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x1801B9170
 * Callers:
 *     ??_ECWARPDrawListEntry@@GJA@EAAPEAXI@Z @ 0x1800F10F0 (--_ECWARPDrawListEntry@@GJA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x1801586C4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x1801B90B4 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::`scalar deleting destructor'(CWARPDrawListEntry *this, char a2)
{
  struct CWARPDrawListEntry *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  CWARPDrawListEntry::~CWARPDrawListEntry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
