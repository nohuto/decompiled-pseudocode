/*
 * XREFs of ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C024384C
 * Callers:
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C0246184 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?ResetDAM@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C00C3574 (-ResetDAM@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ @ 0x1C0241584 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@AEAAXXZ.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z @ 0x1C0243598 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@AEAAXII_N@Z.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0246694 (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DripsBlockerTrackingHelper::EngageDFx(DripsBlockerTrackingHelper *this, char a2)
{
  unsigned int v3; // ebp
  char *v4; // rdi
  __int64 i; // rsi

  if ( !*((_BYTE *)this + 302128) )
  {
    if ( a2 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(this);
      v3 = 0;
      v4 = (char *)this + 44;
      do
      {
        if ( v4[56] )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)v4; i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)&v4[72 * i + 100] )
            {
              DripsBlockerTrackingHelper::EnableEntryAccounting(this, v3, i, 0);
              *(_DWORD *)&v4[72 * i + 100] = 0;
            }
          }
        }
        ++v3;
        v4 += 4720;
      }
      while ( v3 < 0x40 );
      *((LARGE_INTEGER *)this + 37764) = KeQueryPerformanceCounter(0LL);
      *((_BYTE *)this + 302104) = 1;
    }
    else
    {
      DripsBlockerTrackingHelper::TimeInterval::Stop((DripsBlockerTrackingHelper *)((char *)this + 302104));
    }
  }
  DripsBlockerTrackingHelper::ResetDAM(this);
}
