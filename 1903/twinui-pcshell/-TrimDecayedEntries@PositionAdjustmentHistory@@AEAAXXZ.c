/*
 * XREFs of ?TrimDecayedEntries@PositionAdjustmentHistory@@AEAAXXZ @ 0x1803BB4C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___::Run @ 0x1803BB4B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 */

void __fastcall PositionAdjustmentHistory::TrimDecayedEntries(PositionAdjustmentHistory *this)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rsi
  ULONGLONG v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8

  TickCount64 = GetTickCount64();
  v3 = *((_QWORD *)this + 4);
  v4 = TickCount64;
  if ( v3 )
  {
    v5 = v3 - 1;
    v6 = 16 * v3 - 16;
    do
    {
      v7 = *((_QWORD *)this + 3);
      if ( v4 - *(_QWORD *)(v6 + v7 + 8) >= *((unsigned int *)this + 14) && v5 < *((_QWORD *)this + 4) )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v6 + v7));
        v8 = *((_QWORD *)this + 4);
        if ( v5 != v8 - 1 )
        {
          memmove_0(
            (void *)(v6 + *((_QWORD *)this + 3)),
            (const void *)(v6 + *((_QWORD *)this + 3) + 16),
            16 * (v8 - v5) - 16);
          v8 = *((_QWORD *)this + 4);
        }
        *((_QWORD *)this + 4) = v8 - 1;
      }
      --v5;
      v6 -= 16LL;
      --v3;
    }
    while ( v3 );
  }
}
