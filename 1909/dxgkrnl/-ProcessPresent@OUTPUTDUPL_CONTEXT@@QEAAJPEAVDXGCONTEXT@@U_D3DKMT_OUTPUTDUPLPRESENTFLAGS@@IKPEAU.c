/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C027A3A8
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0274BC0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273B4C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C027A4E0 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPresent(
        OUTPUTDUPL_CONTEXT *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a3,
        int a4,
        unsigned int a5,
        struct _D3DKMT_PRESENT_RGNS *a6,
        const struct DXGK_PRESENT_PARAMS *a7,
        struct AUTOEXPANDALLOCATION *a8,
        struct DXGCONTEXT **a9)
{
  DXGDXGIKEYEDMUTEX *v14; // rcx
  struct DXGDEVICE *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  struct DXGCONTEXT *v24; // [rsp+28h] [rbp-48h]
  int v25; // [rsp+30h] [rbp-40h]
  int v26; // [rsp+34h] [rbp-3Ch]
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 v27; // [rsp+38h] [rbp-38h]
  int v28; // [rsp+3Ch] [rbp-34h]
  unsigned int v29; // [rsp+40h] [rbp-30h]
  int v30; // [rsp+44h] [rbp-2Ch]
  struct _D3DKMT_PRESENT_RGNS *v31; // [rsp+48h] [rbp-28h]
  struct AUTOEXPANDALLOCATION *v32; // [rsp+50h] [rbp-20h]
  const struct DXGK_PRESENT_PARAMS *v33; // [rsp+58h] [rbp-18h]
  struct DXGCONTEXT **v34; // [rsp+60h] [rbp-10h]

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 1920LL;
    return 0LL;
  }
  v14 = (DXGDXGIKEYEDMUTEX *)*((_QWORD *)this + *((unsigned int *)this + 11) + 6);
  v15 = (struct DXGDEVICE *)*((_QWORD *)v14 + 1);
  if ( v15 )
  {
    if ( v15 != a2[2] )
    {
      v22 = WdLogNewEntry5_WdAssertion(v14, a2);
      *(_QWORD *)(v22 + 24) = v15;
      *(_QWORD *)(v22 + 32) = a2[2];
      WdLogEvent5_WdAssertion(v22);
      return 3221225473LL;
    }
  }
  else
  {
    v16 = DXGDXGIKEYEDMUTEX::OpenForDevice(v14, a2[2]);
    v20 = v16;
    if ( v16 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdError(v21);
      return (unsigned int)v20;
    }
  }
  v23[1] = 0;
  v26 = 0;
  v30 = 0;
  v23[0] = 0;
  v25 = 0;
  v29 = a5;
  v31 = a6;
  v32 = a8;
  v33 = a7;
  v34 = a9;
  v24 = (struct DXGCONTEXT *)a2;
  v27 = a3.0;
  v28 = a4;
  return OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)v23);
}
