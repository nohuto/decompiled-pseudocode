/*
 * XREFs of ??1MULTISPRITEDDIACCESS@@QEAA@XZ @ 0x1C00FE08C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C00FDD50 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C007A474 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 */

void __fastcall MULTISPRITEDDIACCESS::~MULTISPRITEDDIACCESS(struct _SPRITESTATE **this)
{
  struct _SPRITESTATE *v1; // r8
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct _SPRITESTATE *v5; // r9
  __int64 v6; // rax

  v1 = *this;
  if ( *this )
  {
    v3 = *((unsigned int *)v1 + 15);
    if ( (_DWORD)v3 )
    {
      v4 = 0LL;
      do
      {
        v5 = v1;
        v6 = *(_QWORD *)(*((_QWORD *)v1 + 8) + 8 * v4);
        if ( *(_DWORD *)(v6 + 168) && (*(_DWORD *)(v6 + 40) & 0x20000) == 0 )
        {
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v6 + 80), 0LL);
          v5 = *this;
        }
        v4 = (unsigned int)(v4 + 1);
        v1 = v5;
      }
      while ( (unsigned int)v4 < *((_DWORD *)v5 + 15) );
    }
    else if ( *((_DWORD *)v1 + 22) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x20000) == 0 )
        vSpDirectDriverAccess(*this, v3);
    }
  }
}
