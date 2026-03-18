/*
 * XREFs of ?GetVerticesCore@CGeometry2DGroup@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180213060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetVerticesCore(
        CGeometry2DGroup *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // esi
  __int64 i; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // r12d
  signed int v12; // eax
  __int64 v13; // rcx

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
    {
      v9 = *((_QWORD *)this + 13);
      v10 = *(_QWORD *)(v9 + 8 * i);
      if ( v10 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 192LL))(*(_QWORD *)(v9 + 8 * i));
        v12 = (*(__int64 (__fastcall **)(__int64, struct MilVertexXYZDUV2 *, _QWORD))(*(_QWORD *)v10 + 232LL))(
                v10,
                a2,
                a3);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1C3u, 0LL);
          break;
        }
        a2 = (struct MilVertexXYZDUV2 *)((char *)a2 + 32 * v11);
        a3 -= v11;
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v4;
}
