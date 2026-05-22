/*
 * XREFs of ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x18009CFF8
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18006A378 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x18009CF18 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
        DisplayEdidHelpers *this,
        LUID *a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int DisplayConfigBufferSizes; // eax
  unsigned int v9; // eax
  const struct std::nothrow_t *v10; // rdx
  struct EdidIdentificationBlock *v11; // r9
  unsigned int v12; // eax
  DISPLAYCONFIG_PATH_INFO *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rbx
  UINT32 numModeInfoArrayElements; // [rsp+30h] [rbp-30h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+38h] [rbp-28h]
  void *modeInfoArray; // [rsp+40h] [rbp-20h]
  unsigned int v19[2]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  UINT32 numPathArrayElements; // [rsp+98h] [rbp+38h] BYREF

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x31,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DisplayConfigBufferSizes);
  pathArray = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements, 0x48uLL));
  modeInfoArray = operator new[](saturated_mul(numModeInfoArrayElements, 0x40uLL));
  v9 = QueryDisplayConfig(
         2u,
         &numPathArrayElements,
         pathArray,
         &numModeInfoArrayElements,
         (DISPLAYCONFIG_MODE_INFO *)modeInfoArray,
         0LL);
  if ( v9 )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x3E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
            (const char *)v9);
    v13 = pathArray;
    v14 = v12;
  }
  else
  {
    v15 = 0LL;
    if ( numPathArrayElements )
    {
      while ( 1 )
      {
        *(_QWORD *)v19 = 0LL;
        v20 = 0;
        if ( (int)DisplayEdidHelpers::GetRawEdidIdentificationBlock(
                    *(DisplayEdidHelpers **)&pathArray[v15].sourceInfo.adapterId,
                    (struct _LUID)pathArray[v15].targetInfo.id,
                    (__int64)v19,
                    v11) >= 0
          && v19[0] == *(_DWORD *)this
          && v19[1] == *((_DWORD *)this + 1)
          && v20 == *((_WORD *)this + 4) )
        {
          break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= numPathArrayElements )
          goto LABEL_11;
      }
      v13 = pathArray;
      *a2 = pathArray[v15].sourceInfo.adapterId;
      a3->LowPart = v13[v15].targetInfo.id;
    }
    else
    {
LABEL_11:
      v13 = pathArray;
    }
    v14 = 0;
  }
  if ( v13 )
    operator delete(v13, v10);
  if ( modeInfoArray )
    operator delete(modeInfoArray, v10);
  return v14;
}
