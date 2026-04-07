/*
 * XREFs of ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x180033460
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x1800305C0 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x180033534 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AE568 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CSlideOutCharm::OnEndTransitionRequest(CSlideOutCharm *this)
{
  CBaseObject *v1; // rbx
  __int64 v2; // r9
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v11; // r10d
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rdi
  CAnimationComponent *v16; // rcx

  v1 = 0LL;
  v2 = 0LL;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( *(_DWORD *)(v4 + 40) )
  {
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v2);
      if ( *(_DWORD *)(v5 + 24) != 4 && *(_DWORD *)(v5 + 72) == 72 )
      {
        v11 = *(_DWORD *)(v5 + 112);
        v12 = 0LL;
        if ( v11 )
        {
          v13 = *(_QWORD *)(v5 + 88);
          while ( 1 )
          {
            v14 = *(_QWORD *)(v13 + 8 * v12);
            if ( (*(_DWORD *)(v14 + 24) & 0xFFF) == 0x28 )
              break;
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= v11 )
              goto LABEL_4;
          }
          if ( v14 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
            if ( v1 )
            {
              CBaseObject::Release((CBaseObject *)v14);
              CBaseObject::Release(v1);
              v1 = 0LL;
              break;
            }
            v1 = (CBaseObject *)v14;
          }
        }
      }
LABEL_4:
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(v4 + 40) );
  }
  *((_QWORD *)this + 16) = v1;
  v6 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30), 5);
  v7 = 0LL;
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  if ( *(_DWORD *)(v8 + 40) )
  {
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 8 * v7);
      if ( *(_DWORD *)(v9 + 24) == 3 && *(_DWORD *)(v9 + 72) == 71 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 112); i = (unsigned int)(i + 1) )
        {
          v16 = *(CAnimationComponent **)(*(_QWORD *)(v9 + 88) + 8 * i);
          if ( (*((_DWORD *)v16 + 6) & 0xFFF) == 0x28 )
            CAnimationComponent::SetGhost(v16);
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(v8 + 40) );
  }
  return v6;
}
