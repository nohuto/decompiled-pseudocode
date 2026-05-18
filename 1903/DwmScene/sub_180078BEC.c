/*
 * XREFs of sub_180078BEC @ 0x180078BEC
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_18007AEFC @ 0x18007AEFC (sub_18007AEFC.c)
 * Callees:
 *     sub_18006EC50 @ 0x18006EC50 (sub_18006EC50.c)
 *     sub_1800D0BB0 @ 0x1800D0BB0 (sub_1800D0BB0.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 *     sub_180115568 @ 0x180115568 (sub_180115568.c)
 */

__int64 __fastcall sub_180078BEC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 **v5; // rbx
  __int64 v6; // rdi
  __int64 **v7; // rbx
  __int64 **v8; // rbx
  __int64 **v9; // rbx
  __int64 **v10; // rbx
  __int64 **v11; // rbx
  __int64 **v12; // rbx
  __int64 **v13; // rbx
  __int64 **v14; // rbx
  __int64 **v15; // rbx
  __int64 **v16; // rbx
  __int64 **v17; // rbx
  __int64 **v18; // rbx

  result = sub_180115568(*(_QWORD *)(a1 + 464));
  if ( (_BYTE)result )
  {
    v4 = sub_1800D0C78(v3);
    v5 = *(__int64 ***)(a1 + 464);
    v6 = v4;
    sub_1800D0BB0(v4, 14LL, 0LL, 3LL);
    sub_18006EC50(
      v5,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2018LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Component_Instance_FrameCurrent");
    v7 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 7LL, 0LL, 3LL);
    sub_18006EC50(
      v7,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2019LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_ConstantBuffer_Instance_FrameCurrent");
    v8 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 6LL, 0LL, 3LL);
    sub_18006EC50(
      v8,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2020LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_IndexBuffer_Instance_FrameCurrent");
    v9 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 5LL, 0LL, 3LL);
    sub_18006EC50(
      v9,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2021LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_VertexBuffer_Instance_FrameCurrent");
    v10 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 1LL, 0LL, 3LL);
    sub_18006EC50(
      v10,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2022LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_VertexIndex_Instance_FrameCurrent");
    v11 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 10LL, 0LL, 3LL);
    sub_18006EC50(
      v11,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2023LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Material_Instance_FrameCurrent");
    v12 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 12LL, 0LL, 3LL);
    sub_18006EC50(
      v12,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2024LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Mesh_Instance_FrameCurrent");
    v13 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 8LL, 0LL, 3LL);
    sub_18006EC50(
      v13,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2025LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Shader_Instance_FrameCurrent");
    v14 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 13LL, 0LL, 3LL);
    sub_18006EC50(
      v14,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2026LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_SceneNode_Instance_FrameCurrent");
    v15 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 11LL, 0LL, 3LL);
    sub_18006EC50(
      v15,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2027LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Texture_Instance_FrameCurrent");
    v16 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 0LL, 0LL, 3LL);
    sub_18006EC50(
      v16,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2028LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Vertex_Instance_FrameCurrent");
    v17 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 4LL, 0LL, 3LL);
    sub_18006EC50(
      v17,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2029LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_RenderState_Instance_FrameCurrent");
    v18 = *(__int64 ***)(a1 + 464);
    sub_1800D0BB0(v6, 3LL, 0LL, 3LL);
    return sub_18006EC50(
             v18,
             (__int64)"..\\Source\\Engine\\Engine.cpp",
             2030LL,
             (__int64)"LogInstanceCounts",
             (__int64)"Counter_RenderTarget_Instance_FrameCurrent");
  }
  return result;
}
