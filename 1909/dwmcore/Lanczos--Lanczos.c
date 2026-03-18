/*
 * XREFs of Lanczos::Lanczos @ 0x1801B0D58
 * Callers:
 *     ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x1801B0B60 (-ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z.c)
 *     ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x1801B0C78 (-ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z.c)
 * Callees:
 *     Lanczos::Sinc @ 0x1801B0DC4 (Lanczos--Sinc.c)
 */

double __fastcall Lanczos::Lanczos(double a1)
{
  double v1; // xmm0_8

  if ( COERCE_DOUBLE(*(_QWORD *)&a1 & _xmm) >= 3.0 )
    return 0.0;
  v1 = Lanczos::Sinc();
  return v1 * Lanczos::Sinc();
}
