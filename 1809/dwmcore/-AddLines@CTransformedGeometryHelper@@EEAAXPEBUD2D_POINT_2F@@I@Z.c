/*
 * XREFs of ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18021FE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180016DAC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@QEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x18021FC90 (--$_Emplace_reallocate@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@s.c)
 */

void __fastcall CTransformedGeometryHelper::AddLines(
        CTransformedGeometryHelper *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  __int64 *v3; // rbx
  __int64 v5; // r8
  __int64 v8; // rbp
  _QWORD *v9; // r10
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 32);
  v5 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 5) = v5;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      CMILMatrix::Transform(*((CMILMatrix **)this + 1), (const struct MilPoint2F *)a2, (struct MilPoint2F *)&v10, 1);
      if ( (_QWORD *)v3[2] == v9 )
      {
        std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>(v3, v9, &v10);
      }
      else
      {
        *v9 = v10;
        v3[1] += 8LL;
      }
      v5 = v3[1];
      ++a2;
      --v8;
    }
    while ( v8 );
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 48LL))(
    *((_QWORD *)this + 3),
    *v3,
    (v5 - *v3) >> 3);
}
