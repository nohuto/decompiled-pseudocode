/*
 * XREFs of ?UpdateStop@CGradientBrush@@AEAAXPEAVCColorGradientStop@@@Z @ 0x18001D798
 * Callers:
 *     ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001D760 (-OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientBrush::UpdateStop(CGradientBrush *this, struct CColorGradientStop *a2)
{
  struct CColorGradientStop **i; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _BYTE v7[20]; // [rsp+0h] [rbp-28h]

  for ( i = (struct CColorGradientStop **)*((_QWORD *)this + 14);
        i != *((struct CColorGradientStop ***)this + 15) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != *((struct CColorGradientStop ***)this + 15) )
  {
    v4 = (__int64)i - *((_QWORD *)this + 14);
    v5 = *((_QWORD *)this + 17);
    *(__m128i *)&v7[4] = _mm_loadu_si128((const __m128i *)((char *)a2 + 60));
    *(_DWORD *)v7 = *((_DWORD *)a2 + 14);
    v6 = 5 * (v4 >> 3);
    *(_OWORD *)(v5 + 4 * v6) = *(_OWORD *)v7;
    *(_DWORD *)(v5 + 4 * v6 + 16) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v7[4], 12));
    *((_BYTE *)this + 168) = 0;
  }
}
