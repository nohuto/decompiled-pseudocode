/*
 * XREFs of NtGdiEngDeleteSurface @ 0x1C0130410
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  void *v4; // rcx
  int v5; // edi
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v7, a1);
  v2 = 1;
  if ( v8 && (*(_DWORD *)(v8 + 112) & 0x40000) != 0 )
  {
    if ( *(_QWORD *)(v8 + 144) )
    {
      v3 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails);
      v4 = *(void **)(v8 + 144);
      if ( v3 )
        GrepUnsecureVirtualMemory(v4);
      else
        MmUnsecureVirtualMemory(v4);
      *(_QWORD *)(v8 + 144) = 0LL;
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  SURFREF::~SURFREF((SURFREF *)v7);
  if ( !v5 || !EngDeleteSurface(a1) )
    return 0;
  return v2;
}
