/*
 * XREFs of ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x18010451C
 * Callers:
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801045DC (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801047C0 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 */

bool __fastcall EdgyImpl::DetermineInputRouting(
        EdgyImpl *this,
        enum Windows::UI::Internal::Input::EdgyInputRouting *a2,
        struct ContextualProcessorResponse *a3,
        unsigned int *a4)
{
  unsigned int v8; // ecx
  bool result; // al
  __int16 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-38h]
  int v14; // [rsp+3Ch] [rbp-34h]
  _BYTE v15[12]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-24h]
  __int64 v17; // [rsp+68h] [rbp-8h]

  *(_DWORD *)a2 = 0;
  *(_DWORD *)a3 = 0;
  *a4 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  memset_0(v15, 0, 0x28uLL);
  v17 = 0LL;
  if ( EdgyImpl::GetCandidateEdgyDetectedInfo(this, (struct CandidateEdgyDetectedInfo *)&v10) )
  {
    v8 = v16;
    if ( v16 == *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) )
    {
      result = 1;
      if ( v13 != 1 )
        return result;
      if ( v14 != 1 )
      {
        *(_DWORD *)a2 = 1;
        *(_DWORD *)a3 = 2;
        *a4 = v8;
        return result;
      }
      *(_DWORD *)a3 = 3;
    }
  }
  return 0;
}
