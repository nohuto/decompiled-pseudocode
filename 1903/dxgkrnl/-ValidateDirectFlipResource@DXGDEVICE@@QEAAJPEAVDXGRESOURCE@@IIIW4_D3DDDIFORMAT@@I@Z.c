/*
 * XREFs of ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C0150738
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C0150358 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ValidateDirectFlipResource(
        ADAPTER_RENDER **this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        enum _D3DDDIFORMAT a6,
        unsigned int a7)
{
  unsigned int v7; // ebp
  __int64 v9; // rax
  _QWORD *v10; // r15
  unsigned int v11; // r14d
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  const GUID *v14; // r8
  int v15; // eax
  __int64 v16; // rbp
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  struct _DXGKARG_DESCRIBEALLOCATION v25; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
  v7 = a3;
  if ( (*((_DWORD *)a2 + 1) & 1) != 0 && (v9 = *((_QWORD *)a2 + 7)) != 0 && *(_DWORD *)(v9 + 124) == a7 )
  {
    v10 = *(_QWORD **)(v9 + 128);
    v11 = 0;
    if ( !a7 )
      return 0LL;
    while ( 1 )
    {
      v12 = v10 - 6;
      v13 = *((_DWORD *)v10 - 11);
      if ( (v13 & 0x2000) == 0 )
        break;
      if ( v7 != ((v13 >> 6) & 0xF) )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
        v22[4] = v7;
        v22[3] = a2;
        v24 = (*((_DWORD *)v12 + 1) >> 6) & 0xF;
        v22[6] = -1073741811LL;
        v22[5] = v24;
        goto LABEL_18;
      }
      memset(&v25, 0, sizeof(v25));
      v25.hAllocation = (HANDLE)v12[2];
      v15 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v25, v14);
      v16 = v15;
      if ( v15 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
        v23[4] = this;
        v23[3] = v16;
        v23[5] = v12[2];
        v23[6] = v12;
        WdLogEvent5_WdError(v23);
        return (unsigned int)v16;
      }
      if ( a4 != v25.Width || a5 != v25.Height || a6 != v25.Format )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
        v18[3] = a2;
        v18[4] = a6;
        v18[5] = v25.Format;
        v18[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v18);
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
        v22[3] = a4;
        v22[4] = v25.Width;
        v22[5] = a5;
        v22[6] = v25.Height;
        goto LABEL_18;
      }
      v10 = (_QWORD *)*v10;
      ++v11;
      v7 = v27;
      if ( v11 >= a7 )
        return 0LL;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v22[3] = a2;
    v22[5] = -1073741811LL;
    v22[4] = v12;
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v22[3] = a2;
    v22[4] = -1073741811LL;
  }
LABEL_18:
  WdLogEvent5_WdWarning(v22);
  return 3221225485LL;
}
