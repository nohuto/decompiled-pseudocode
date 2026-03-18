/*
 * XREFs of ?GetAdapterLuid@CDXGIEnumeration@@QEBA?AU_LUID@@I@Z @ 0x1800264A4
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDXGIEnumeration::GetAdapterLuid(CDXGIEnumeration *this, _QWORD *a2, unsigned int a3)
{
  *a2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL * a3) + 336LL);
  return (struct _LUID)a2;
}
