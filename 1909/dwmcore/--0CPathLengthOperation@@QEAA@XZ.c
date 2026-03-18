/*
 * XREFs of ??0CPathLengthOperation@@QEAA@XZ @ 0x18024AD80
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18024BAD0 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z @ 0x1801C3AA4 (--0-$CBezierFlattener@MVCMilPoint2F@@@@QEAA@M@Z.c)
 */

CPathLengthOperation *__fastcall CPathLengthOperation::CPathLengthOperation(CPathLengthOperation *this)
{
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((__int64)this, 0.25);
  `vector constructor iterator'(
    (char *)this + 92,
    8LL,
    16LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  return this;
}
