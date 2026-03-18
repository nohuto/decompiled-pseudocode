/*
 * XREFs of ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1C0059DE4
 * Callers:
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C005764C (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipManager::ConsumerPostMessage(PRKEVENT *this, struct CFlipConsumerMessage *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx

  v2 = this + 23;
  if ( (_QWORD *)*v2 == v2 )
    KeSetEvent(this[30], 1, 0);
  v4 = (_QWORD *)v2[1];
  v5 = (_QWORD *)(((unsigned __int64)a2 + 48) & -(__int64)(a2 != 0LL));
  if ( (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v5 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 48) & -(__int64)(a2 != 0LL)) + 8) = v4;
  *v4 = v5;
  v2[1] = v5;
  ++*((_DWORD *)a2 + 2);
}
